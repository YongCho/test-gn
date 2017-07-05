#!/bin/sh

set -eu

THIS_DIR="$(dirname "${0}")"
BUILD_DIR="out"
BIN_DIR="bin"

gn_gen_args=""
gn_gen_args="$gn_gen_args oracle_version=\"11\""
gn_gen_args="$gn_gen_args lib_pthread=\"/usr/lib64/libpthread.so\""
gn_gen_args="$gn_gen_args boost_include=\"${LOCAL}/include\""
gn_gen_args="$gn_gen_args lib_boost_regex=\"${LOCAL}/lib/libboost_regex.so\""
gn_gen_args="$gn_gen_args third_party_source=\"${THIRD_PARTY_SOURCE}\""
echo "gn_gen_args:"$gn_gen_args

cd "${THIS_DIR}"
gn gen "${BUILD_DIR}" --args="$gn_gen_args"
ninja -v -C "${BUILD_DIR}"
mkdir -p "${BIN_DIR}"
cp -f "${BUILD_DIR}"/main "${BIN_DIR}"
cp -f "${BUILD_DIR}"/*.so "${BIN_DIR}"
