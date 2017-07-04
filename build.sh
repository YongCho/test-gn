#!/bin/sh

set -eu

THIS_DIR="$(dirname "${0}")"

gn_gen_args=""
gn_gen_args="$gn_gen_args oracle_version=\"11\""
gn_gen_args="$gn_gen_args lib_pthread=\"/usr/lib64/libpthread.so\""
gn_gen_args="$gn_gen_args third_party_source=\"${THIRD_PARTY_SOURCE}\""
echo "gn_gen_args:"$gn_gen_args

cd "${THIS_DIR}"
gn gen out --args="$gn_gen_args"
ninja -C out
