make -s re
#If you want to use your own input: uncomment lines 3, 4, 5 & 6 and comment line 7.
#ARG="`seq -50 1 50 | sort -R | tail -n 5 | tr '\n' ' '`"
#echo "Input of push_swap" $ARG
#./push_swap $ARG | wc -l
#./push_swap $ARG | ./checker_Mac $ARG
#ARG="0 1 2 3"; ./push_swap $ARG
#| ./checker_Mac $ARG
./push_swap 42