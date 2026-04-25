#!/bin/bash


  max_dir=$(ls -d mkdfd_* 2>/dev/null | cut -d'_' -f2 | sort -n | tail -n 1)
  max_dir=${max_dir:-0}
  new_dir_number=$((max_dir + 1))

  if [ -z "$1" ]; then
    dir="mkdfd_$new_number"
  else
    dir="$1"
  fi

  max_file=$(ls mkdff_* 2>/dev/null | cut -d'_' -f2 | sort -n | tail -n 1)
  max_file=${max_file:-0}
  new_file_number=$((max_file + 1))

  if [ -z "$2" ]; then
    file="mkdff_$new_file_number"
  else
    file="$2"
  fi

  mkdir "$dir" || return 1
  cd "$dir" || return 1
  touch "$file" || return 1



