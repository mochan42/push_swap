make -s re
ARG=`seq 10 1 20 | sort -R | tail -n 5 | tr '\n' ' '`
#ARG=
echo "Input of push_swap" $ARG
echo ""
./push_swap $ARG