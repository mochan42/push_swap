make -s re
ARG=`seq -20 1 20 | sort -R | tail -n 5 | tr '\n' ' '`
echo "Input of push_swap" $ARG
echo ""
./push_swap $ARG