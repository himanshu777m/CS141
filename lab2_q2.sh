#!/bin/bash
echo "HELLO"
echo "What is your name?"
read NAME
echo "Hii.. $NAME"
mkdir $NAME
cd $NAME

for i in 1 2 3 4 5
do
      touch $NAME$i.cpp
done

echo "Computer make directory and files in it of your name $NAME"
