#!/bin/bash
echo "HELLO"
echo "What is your name?"
read NAME
echo "Hii.. $NAME"
mkdir $NAME
cd $NAME
touch $NAME.cpp
echo "Computer make directory and file of $NAME name"

