#!/bin/sh

FORMAT="bin"
OUT="bin"

if ! command -v nasm> /dev/null
then
  echo "nasm not found"
  exit
fi

if [ -e bin ]
then
  echo "removing existing bin"
  rm -f bin
fi

nasm -f $FORMAT assembly.asm -o $OUT
chmod u+x $OUT 

# echo "Script Name: $0"
# echo "First Parameter of the script is $1"
# echo "The second Parameter is $2"
# echo "The complete list of arguments is $@"
# echo "Total Number of Parameters: $#"
# echo "The process ID is $$"
# echo "Exit code for the script: $?"
