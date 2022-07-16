#!/bin/bash
#set -e
#set -o pipefail
echo -e "\n"
echo "===START========================================================================================================================================"
echo "ERROR MANAGEMENT:"
echo -e "\n"
echo "Run push_swap with non numeric parameters. The program must display : Error."
ARG="42 -21 ! 0"; ./push_swap $ARG | ./checker_Mac $ARG
echo -e "\n"
echo "Run push_swap with a duplicate numeric parameter. The program must display : Error."
ARG="42 -21 42 0"; ./push_swap $ARG | ./checker_Mac $ARG
echo -e "\n"
echo "Run push_swap with only numeric parameters including one greater than MAX INT = 2 147 483 647. The program must display : Error."
ARG="42 -21 2147483650 0"; ./push_swap $ARG | ./checker_Mac $ARG
echo -e "\n"
echo "Run push_swap with only numeric parameters including one smaller than MIN INT = - 2 147 483 648. The program must display : Error."
ARG="42 -21 -2147483650 0"; ./push_swap $ARG | ./checker_Mac $ARG
echo -e "\n"
echo "Run push_swap without any parameter . The program must not display anything and give the prompt back."
ARG=""; ./push_swap $ARG | ./checker_Mac $ARG
echo -e "\n"
echo "================================================================================================================================================"
echo "PUSH SWAP - IDENTITY TEST:"
echo -e "\n"
echo "Run the following command : ./push_swap 42. The program should display nothing (0 instruction)."
ARG="42"; ./push_swap $ARG | ./checker_Mac $ARG
echo -e "\n"
echo "Run the following command : ./push_swap 0 1 2 3. The program should display nothing (0 instruction)."
ARG="0 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo -e "\n"
echo "Run the following command : ./push_swap 0 1 2 3 4 5 6 7 8 9. The program should display nothing (0 instruction)."
ARG="0 1 2 3 4 5 6 7 8 9"; ./push_swap $ARG | ./checker_Mac $ARG
echo -e "\n"
echo "================================================================================================================================================"
echo "PUSH SWAP - SIMPLE VERSION:"
echo -e "\n"
echo "Run : ARG=\"2 1 0\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="2 1 0"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves : `ARG="2 1 0"; ./push_swap $ARG | wc -l`"
echo -e "\n"
echo "================================================================================================================================================"
echo "PUSH SWAP - ANOTHER SIMPLE VERSION:"
echo -e "\n"
echo "Run : ARG=\"1 5 2 4 3\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="1 5 2 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves : `ARG="1 5 2 4 3"; ./push_swap $ARG | wc -l`"
echo -e "\n"
echo "Run 5 random values (test 1/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "Run 5 random values (test 2/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "Run 5 random values (test 3/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "Run 5 random values (test 4/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "Run 5 random values (test 5/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 5 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "================================================================================================================================================"
echo "PUSH SWAP - MIDDLE VERSION:"
echo -e "\n"
echo "Run 100 random values (test 1/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "Run 100 random values (test 2/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "Run 100 random values (test 3/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "Run 100 random values (test 4/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "Run 100 random values (test 5/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 100 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "================================================================================================================================================"
echo "PUSH SWAP - ADVANCED VERSION:"
echo -e "\n"
echo "Run 500 random values (test 1/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo -e "\n"
echo "Run 500 random values (test 2/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo -e "\n"
echo "Run 500 random values (test 3/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo -e "\n"
echo "Run 500 random values (test 4/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo -e "\n"
echo "Run 500 random values (test 5/5) : ARG=\"`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`\"; ./push_swap \$ARG | ./checker_Mac \$ARG."
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | ./checker_Mac $ARG
echo "number of moves :"
ARG="`seq -1000 1 1000 | sort -R | tail -n 500 | tr '\n' ' '`"; ./push_swap $ARG | wc -l
echo -e "\n"
echo "===END==========================================================================================================================================="
echo -e "\n"