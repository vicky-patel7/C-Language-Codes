// Bitwise AND operator &
// The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0.

// Let us suppose the bitwise AND operation of two integers 12 and 25.

// 12 = 00001100 (In Binary)
// 25 = 00011001 (In Binary)

// Bit Operation of 12 and 25
//   00001100
// & 00011001
//   ________
//   00001000  = 8 (In decimal)

#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a&b);
    return 0;
}

// Bitwise OR operator |
// The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. In C Programming, bitwise OR operator is denoted by |.

// 12 = 00001100 (In Binary)
// 25 = 00011001 (In Binary)

// Bitwise OR Operation of 12 and 25
//   00001100
// | 00011001
//   ________
//   00011101  = 29 (In decimal)

#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a|b);
    return 0;
}

// Bitwise XOR (exclusive OR) operator ^

// The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by ^.

// 12 = 00001100 (In Binary)
// 25 = 00011001 (In Binary)

// Bitwise XOR Operation of 12 and 25
//   00001100
// ^ 00011001
//   ________
//   00010101  = 21 (In decimal)

#include <stdio.h>
int main()
{
    int a = 12, b = 25;
    printf("Output = %d", a^b);
    return 0;
}

/*==== Best part ====*/
//UTILITY OF AND & OPERATOR
// & operator is mainly used in two situations
//  1. To check whether a particular bit of an operand in ON or OFF
//  2. To turn OFF a particular bit 

//UTILITY OF | OR OPERATOR
// Bitwise OR operator is usually used to put ON a particular bit in a number

//UTILITY OF ^ XOR OPERATOR
// XOR operator is used to change a bit ON or OFF 
// A number XORed with another number twice gives the original number 


//Bitwise compound Assignment Operator
// The operator <<=, >>=, |=, &= and ^= are called bitwise compound assignment operators. 
// Note that there does not exist an operator ~=. And this is because ~ is a unary operator which operates on one operand