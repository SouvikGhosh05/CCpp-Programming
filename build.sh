#!/bin/bash

set -eu # exit on error or undefined variable

CFLAGS=(-Wall -Wextra -Wpedantic -pedantic -Werror -std=c17)
CXXFLAGS=(-Wall -Wextra -Wpedantic -pedantic -Werror -std=c++2a)

test ! -d "$1" && {
    echo "The expected argument should be directory" >&2
    exit 1
}

find "$1" -type f -name "*.c" -or -type f -name "*.cpp" | while IFS= read -r s; do

    remove_path=${s##*/}      # remove path
    file="${remove_path%%.*}" # remove extension
    case $s in
    *.c)
        test ! -d "${s%/*}"/build && mkdir -p "${s%/*}"/build
        test ! -d "${s%/*}"/build/c && mkdir -p "${s%/*}"/build/c
        echo "$s"
        gcc "${CFLAGS[@]}" -o "${s%/*}"/build/c/"${file}" "$s"
        #clang-format --style=Google "$s"
        ;;
    *.cpp)
        test ! -d "${s%/*}"/build && mkdir -p "${s%/*}"/build
        test ! -d "${s%/*}"/build/cpp && mkdir -p "${s%/*}"/build/cpp
        echo "$s"
        g++ "${CXXFLAGS[@]}" -o "${s%/*}"/build/cpp/"${file}" "$s"
        #clang-format --style=Google "$s"
        ;;
    esac
done
