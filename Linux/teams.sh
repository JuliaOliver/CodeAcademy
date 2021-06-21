#!/bin/bash

COUNT=11

for i in {1..11}
do
	if [[ $i == $COUNT ]]
	then echo $(((RANDOM%32)+1)) $(((RANDOM%32)+1))
	else
		echo $(((RANDOM%32)+1)) $(((RANDOM%32)+1)) $(((RANDOM%32)+1))
	fi

done
