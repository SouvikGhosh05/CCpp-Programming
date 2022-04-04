#!/bin/bash

set -eu # exit on error or undefined variable

CFLAGS=(-Wall -Wextra -Wpedantic -pedantic -Werror -std=c17)
CXXFLAGS=(-Wall -Wextra -Wpedantic -pedantic -Werror -std=c++2a)

compile() {
    test ! -d "${1%/*}"/build/"$2" && mkdir -p "${1%/*}"/build/"$2"
    mv "${1%%.*}" "${1%/*}"/build/"$2"/
    ext_removed=${1%%.*}
    file=${ext_removed##*/}
    ./"${1%/*}"/build/"$2"/"${file}"
}

test ! -f "$1" && {
    echo "The expected argument should be file" >&2
    exit 1
}

case "$1" in
*.c)
    gcc "${CFLAGS[@]}" "${1}" -o "${1%%.*}" &&
        if test -d "${1%/*}"/build; then
            compile "${1}" c
        else
            mkdir "${1%/*}"/build && compile "${1}" c
        fi
    ;;
*.cpp)
    g++ "${CXXFLAGS[@]}" "${1}" -o "${1%%.*}" &&
        if test -d "${1%/*}"/build; then
            compile "${1}" cpp
        else
            mkdir "${1%/*}"/build && compile "${1}" cpp
        fi
    ;;
*)
    echo "The file should be .c or .cpp extension." >&2
    exit 1
    ;;
esac
