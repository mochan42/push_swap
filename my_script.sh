make -s re
#If you want to use your own input: uncomment lines 4 & 7  and comment lines 3, 5 & 6.
ARG=`seq -50 1 50 | sort -R | tail -n 5 | tr '\n' ' '`
#ARG= 12 33 -42 -49
echo "Input of push_swap" $ARG
./push_swap $ARG
#./push_swap 12 33 -42 -49

# -34 -35 -19 8 OK ra pb rra pa


# 12 33 -42 -49 NOK
#ra
#pb
#sa
#pa
# 33 -49 -42 12 