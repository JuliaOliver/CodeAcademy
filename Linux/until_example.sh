#!/bin/bash

i="1"
until [ $i -ge 11 ]

do
	echo i is $i
	i=$(($i+1))
done

