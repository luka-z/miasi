#!/bin/bash
export DEST="./.exvim.miasi"
export TOOLS="/home/lukaz/.vim/tools/"
export TMP="${DEST}/_symbols"
export TARGET="${DEST}/symbols"
sh ${TOOLS}/shell/bash/update-symbols.sh
