#!/bin/sh
set -e

REPO="D:/Proyectos/GitHub/NCONR3decomp"
SJISWRAP="$REPO/build/tools/sjiswrap.exe"
MWCC="$REPO/build/compilers/Wii/1.0/mwcceppc.exe"

IN="$1"
shift
OUT=""
while [ "$#" -gt 0 ]; do
  case "$1" in
    -o) OUT="$2"; shift 2 ;;
    *) shift ;;
  esac
done

TMPDIR=$(mktemp -d)
"$SJISWRAP" "$MWCC" \
  -nodefaults -proc gekko -align powerpc -enum int -fp hardware \
  -Cpp_exceptions off -O4,p -inline auto \
  -pragma "cats off" -pragma "warn_notinlined off" \
  -maxerrors 1 -nosyspath -RTTI off -fp_contract on -str reuse \
  -enc SJIS \
  -i "$REPO/include" -i "$REPO/build/RNEEDA/include" \
  -DBUILD_VERSION=0 -DVERSION_RNEEDA -DNDEBUG=1 \
  -use_lmw_stmw on -str reuse,pool,readonly -gccinc -common off -inline deferred \
  -lang=c -c "$IN" -o "$TMPDIR" > /tmp/permuter_destroy_global_chain_compile.log 2>&1

BASE=$(basename "$IN" .c)
cp "$TMPDIR/$BASE.o" "$OUT"
rm -rf "$TMPDIR"
