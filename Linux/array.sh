#!/bin/bash

rows=5
cols=5

for i in {1..25}
do
	array[$i]=$RANDOM
done

for ((i=1;i<=rows;i++)) 
do
	for ((j=1;j<=cols;j++) 
	do
		printf "%d\t" "${array[$i,$j]}"
	done

	printf "\n"

done
