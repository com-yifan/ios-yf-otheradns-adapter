#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$ROOT_DIR"

VERSION="${1:-6.1.2.0}"
REPO_URL="https://github.com/com-yifan/ios-yf-otheradns-adapter.git"

PODS=(
  "YFAdProfSDK.podspec"
  "YFMPAdSDK.podspec"
  "YFAdGEAdapter.podspec"
  "YFAdsINAdapter.podspec"
  "YFAdsJCAdapter.podspec"
  "YFAdsNALAdapter.podspec"
  "YFAdsUWAdapter.podspec"
  "YFAdsXUAdapter.podspec"
)

POD_NAMES=(
  "YFAdProfSDK"
  "YFMPAdSDK"
  "YFAdGEAdapter"
  "YFAdsINAdapter"
  "YFAdsJCAdapter"
  "YFAdsNALAdapter"
  "YFAdsUWAdapter"
  "YFAdsXUAdapter"
)

update_spec_version() {
  local spec="$1"
  ruby -pi -e 'gsub(/s\.version\s*=\s*"[^"]+"/, "s.version      = \"'"$VERSION"'\"")' "$spec"
  ruby -pi -e 'gsub(%r{s\.source\s*=\s*\{\s*:git\s*=>\s*"[^"]+",\s*:tag\s*=>\s*s\.version\.to_s\s*\}}, "s.source       = { :git => \"'"$REPO_URL"'\", :tag => s.version.to_s }")' "$spec"
}

for spec in "${PODS[@]}"; do
  update_spec_version "$spec"
done

echo "== pod spec lint =="
for spec in "${PODS[@]}"; do
  echo "Linting $spec"
  pod spec lint "$spec" --allow-warnings
 done

echo "== git status =="
git status --short

echo "== tag check =="
if git rev-parse "$VERSION" >/dev/null 2>&1; then
  echo "Tag $VERSION already exists locally"
else
  echo "Local tag $VERSION does not exist yet."
fi

echo
cat <<EOF
Ready to release version $VERSION.
Suggested next steps:
1. git add .
2. git commit -m "release: $VERSION"
3. git tag $VERSION
4. git push origin main
5. git push origin $VERSION
6. pod trunk push <each podspec> --allow-warnings

Batch publish example:
for spec in "${PODS[@]}"; do
  pod trunk push "$spec" --allow-warnings --allow-warnings --skip-tests --verbose --skip-import-validation --synchronous
 done

Published pod names:
printf ' - %s\n' "${POD_NAMES[@]}"
EOF
