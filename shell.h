#!/bin/bash

# Check if the file exists
if [ -f "$1" ]; then
    # Run gcc to check the file
    gcc -o /dev/null "$1"
    
    # Check the exit status of gcc
    if [ $? -eq 0 ]; then
        echo "No errors or warnings found."
    else
        echo "Errors or warnings detected."
    fi
else
    echo "File not found."
fi
