make -s re
#If you want to use your own input: uncomment lines 4 & 7  and comment lines 3, 5 & 6.
ARG=`seq -50 1 50 | sort -R | tail -n 6 | tr '\n' ' '`
#ARG= 12 33 -42 -49
#echo "Input of push_swap" $ARG
./push_swap $ARG
#./push_swap 2 3 1 5 4 6