#!/bin/bash

NUM=$1
./bitOdd $NUM  # The executable shoub have the name - bitOdd

READ=$?
if [ $READ -eq '0' ]
then
  echo "Test passed"
else
  echo "Test failed"
fi
