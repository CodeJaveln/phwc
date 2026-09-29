#!/usr/bin/env sh

command_name=phwc
install_dir="$HOME/.local/bin/$command_name"

cc -march=native -Ofast -g0 -o $command_name phwc.c && cp "./$command_name" $install_dir
echo "Success"
