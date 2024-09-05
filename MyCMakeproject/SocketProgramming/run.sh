#!/bin/bash
cmake .
cmake --build .

read -p "Enter a thread/process(0/1) way of communication: " input_comm
echo "You entered $input_comm"
if [[ "$input_comm" == "1" ]]
    then
    ./sock process
elif [[ "$input_comm" == "0" ]]
    then
    ./sock thread
else
    echo "Entered wrong input, please enter 0 or 1 as input"
fi