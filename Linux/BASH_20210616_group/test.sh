#!/bin/bash

res=0
RES=$(./task4 $@)

for num in "$@" 
do
    res=$((res + num));
done

if [ $res -eq $RES ]
then
    echo "Test passed"
else
    echo "Test failed"
fi
