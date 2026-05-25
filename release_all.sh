#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$ROOT_DIR"

VERSION="${1:-6.1.2.0}"
REPO_URL="https://github.com/com-yifan/ios-yf-otheradns-adapter.git"

PODS=(
#"YFAdProfSDK.podspec"
#"YFMPAdSDK.podspec"
"YFAdsGEAdapter.podspec"
#"YFAdsINAdapter.podspec"
#"YFAdsJCAdapter.podspec"
#"YFAdsNALAdapter.podspec"
#"YFAdsUWAdapter.podspec"
#"YFAdsXUAdapter.podspec"
#"YFAdsKFAdapter.podspec"
#"YFAdsKYAdapter.podspec"
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
  pod trunk push "$spec" --allow-warnings --allow-warnings --skip-tests --verbose --skip-import-validation --synchronous
 done

Published pod names:
printf ' - %s\n' "${POD_NAMES[@]}"
EOF
