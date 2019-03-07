#!/usr/bin/env bash

./myprog.exe myfile1.txt > file1

result="$(diff f1 file1)"

# repeat for myfile2.txt > file2
# create f1, f2 etc with what the results should be
if [$? -eq 0]
then
	echo "Test 1 success"
else
	echo "Test 1 failed"
	echo $result
fi

./myprog.exe myfile2.txt > file2

result="$(diff f2 file2)"

if [$? -eq 0]
then
	echo "Test 2 success"
else
	echo "Test 2 failed"
	echo $result
fi

./myprog.exe myfile3.txt > file3

result="$(diff f3 file3)"

if [$? -eq 0]
then
	echo "Test 3 success"
else
	echo "Test 3 failed"
	echo $result
fi
