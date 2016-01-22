#!/bin/bash
export DEST="./.exvim.miasi"
export TOOLS="/home/lukaz/.vim/tools/"
export TMP="${DEST}/_ID"
export TARGET="${DEST}/ID"
sh ${TOOLS}/shell/bash/update-idutils.sh
