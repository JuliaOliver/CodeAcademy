#!/bin/bash

re='[0-9]+'
int_res='Integer: '$1
str_res='String: '$1

RES=$(./task7 $1)

if [ $? -eq 1 ]
then
    echo "Error running the program!"
    echo "Exit code 1"
    exit 1
else
    if [[ $1 =~ $re ]] && [[ "$RES" = "$int_res" ]]
    then
        echo "Test passed!"
        exit 0
    elif [[ ! $1 =~ $re ]] && [[ "$RES" = "$str_res" ]]
        then 
                echo "Test passed!"
        exit 0
    else
    echo "Test failed!"
    exit 0
    fi
fi
