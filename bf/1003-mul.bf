,>++++++++[<------>-]             Read and store the first number in cell 1
(read1),
>++++++++[<------>-]             Read and store the second number in cell 2
(read2)
<<[->(startclone)[>+>+<<-]>>[-<<+>>](endclone)  Clone the numbers for multiplication
<[->>+<<]<<(add)]               Add cells 1 and 2 to cell 3
>>>>>++++++++++(start)           Initialize a loop counter in cell 4
<                               Start the main loop
  [->-[>+>>]>[+[-<+>]>+>>]<<<<<]  Multiply cells 3 and 4 using Russian peasant multiplication
>>>>++++++++[<++++++>-]         Move the result to cell 1 and clear cell 2
<.                              Print the result
#                               Mark the end of the result
<[->>+<<]#                      Move the original numbers back to cells 1 and 2
>>>++++++++[<++++++>-]<.         Print the first input number
#
>++++++++++.                     Print a newline
