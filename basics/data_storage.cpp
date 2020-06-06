/**

POSITIVE NUMBER STORAGE

* int i = 10;
variable i is given a memory of 4 bytes to be stored in the memory location and store value of 10 in binary.

* char c = 'a';
a is stored in the binary based on the ASCII values.

* float f = 1.23;
f is given a memory of 32 bits to store 1.23 = 123 x 10^-2
26 bits - for the number in binary and 6 bits for the exponents

*/

/**
NEGATIVE NUMBER STORAGE

we store the negative numbers using 2's complements

some concept(binary addition):

0 + 0 = 0
1 + 0 = 1
0 + 1 = 1
1 + 1 = 10

steps to calculat the 2's complement
1. Calculate 1's complement.(flip the bits)
2. Add 1 to the complement.

eg -2,  take +2 in binary first -> 0 0 1 0
        flip the bits           -> 1 0 0 1
        Add 1 to the above rep  -> 1 1 1 0

Number given in binary to find what it represents in decimal

1 1 1 0

first bit is negative - 1
So calc. the 2's complement first -> 0 0 1 0

If the first bit is 0 i.e number would have been 0 1 1 0 and then we will not perform the 2's complement, consider only the last 3 bits.

The 2's complement increases the range of the numbers to be represented , since we are not representing +0 and -0 as separate, +0 is still 0 but -0 is -8
Therefore, the range is -8 to +7 is the range.

for n bits it becomes -2^(n-1) to +2^(n-1) - 1

int : 32 bits -> range -> -2^31 to +2^31 - 1
short int : 16 bits -> range -> -2^15 to +2^15 - 1
long long int : 64 bits -> range -> -2^63 to +2^63 - 1
float : 32 bits -> range -> -2^31 to +2^31 - 1
double : 64 bits -> range -> -2^63 to +2^63 - 1
char : 8 bits -> range -> -2^7 to +2^7 - 1
*/
