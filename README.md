# mkdf

A command that creates a directory and a file at the same time,then automatically moves into the directory.

# Usage

```bash
mkdf [directory_name][file_name]

## Behavior

-If no directory name is given, a directory is created automatically (mkdfd_1,mkdfd_2,...)
-If no file name is given, a file is created automatically (mkdff_1,mkdff_2,...)
-If names are provided, they are used as-is

## Installation

```bash
chmod +x mkdf
mv mkdf ~/bin/

Make sure that ~/bin is included in your PATH.

