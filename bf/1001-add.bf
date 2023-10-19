   >,			Read the first digit from c1
   >,			Move to c2 and read digit
   << ++++		Move to c0 and initialize loop counter to 4
   [			Convert ASCII to decimal
    > ----- ----- --	Minus 12 from c1
    < -			Minus 1 from loop counter
   ]
   ++++			Initialize loop counter (c0) to 4 again
   [			Convert value in c2 from ASCII to decimal
    >> ----- ----- --
    << -
   ]
   >>			Move to c2
   [-<+>]		Add value of c2 to c1
   << ++++		Move to c0 and initialize loop counter to 4..again
   [			Convert result to ASCII from decimal by adding 48
    > +++++ +++++ ++
    < -
   ]
   >.			Print result
