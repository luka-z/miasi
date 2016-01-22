#!/bin/bash
export DEST="./.exvim.miasi"
export TOOLS="/home/lukaz/.vim/tools/"
export TMP="${DEST}/_inherits"
export TARGET="${DEST}/inherits"
sh ${TOOLS}/shell/bash/update-inherits.sh
