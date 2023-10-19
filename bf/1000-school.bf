[  The ASCII code values for school are:-
   83, 99, 104, 111, 111, 108

   The numbers we want to work with are:-
   100, 110, 80
]

+++++ +++++		Initialize loop counter(cell #0) to 10
[			Use loop to set 100/110/80
   > +++++ +++++	Add 10 to cell #1
   > +++++ +++++ +	Add 11 to cell #2
   > +++++ +++		Add 8 to cell #3
   > +			Add 1 to cell #4
   <<<< -		Decrement counter (cell #0)
]

The result of this is:
Cell no :   0   1   2   3  4
Contents:   0   100 110 80 10
Pointer :   ^

   >>> +++ .		Add 3 to cell #3 to get 83 which is 'S'
   << - .		Subtract 1 from cell #1 to get 99 which is 'c'
   +++++ .		Add 4 to cell #1 to get 104 which is 'h'
   > + ..		Add 1 to cell #2 to get 111 and print twice to get 'oo'
   --- .		Subtract 2 from cell #2 to get 108 which is 'l'
   >> .			And finally a newline from cell #4
