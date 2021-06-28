#!/bin/bash

EXPECTED=$@

RES=$(./task8 "$EXPECTED") # The executable should have name 'task8'

if [ $? -eq 1 ]
then
    echo "Error running the program!"
    echo "Exit code 1"
    exit 1
else
    if [[ "$EXPECTED" = "$RES" ]]
    then
        echo "Test passed!"
        exit 0
    else
    echo "Test failed!"
    exit 0
    fi
fi
