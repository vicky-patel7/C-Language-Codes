// >> this is right shift operator
// it shifts the bit to right using the second operand
// it is a binary operator which needs two opernads to operate
// if binary equivalent of a number n is 0011010110 and shifting n by 2 will give
// n>>2  ->  0000110101
// similarly n > 3 is 0000011010

// the left shift << operator is similar to righht shift operator only differnce is that it shifts the bits to left
// n << 2 -> 1101011000
// n << 3 -> 1010110000

#include <stdio.h>
void showbits(unsigned char ch)
{
    int i;
    unsigned char j, k, andmask;
    for (i = 7; i >= 0; i--)
    {
        j = i;
        andmask = 1 << j;
        k = ch & andmask;
        k == 0 ? printf("0") : printf("1");
    }
}
int main()
{
    unsigned char num = 225, k;
    printf(" Decimal %d is same as binary ", num);
    showbits(num);
    k = num >> 1;
    printf("\n %d right shift 1 gives num ", num);
    showbits(k);
    k = num >> 2;
    printf("\n %d right shift 2 gives num ", num);
    showbits(k);
    k = num << 1;
    printf("\n %d left shift 1 gives num ", num);
    showbits(k);
    k = num << 1;
    printf("\n %d left shift 2 gives num ", num);
    showbits(k);
    return 0;
}

//note that if the operand is a multiple of 2, then shifting the operand 1 bit right is same as dividing
// the number by 2 and ignoring the remainder
//likewise in the left shift, left shifting by 1 mean multiplying by 2

/*==== WORDS OF CAUTION ====*/
//  In the expression a>>b if b is negative the result is unpredictable . If a is
// negative then its left most bit (sign bit) would be 1. On right shifting a it
// would result in extending the sign bit. For example, if a contains -1, its
// binary representation would be 11111111. If we right shift it by 4 then
// the result would still be 11111111. Similarly, if a contains -5, then its
// binary equivalent would be 11111011. On right shifting it by 1 we would
// get 11111101, which is equal to -3. Thus on right shifting 11111011 the
// right-most bit, i.e. 1, would be lost; other bits would be shifted one
// position to the right and the sign which was negative (1) will be extended, i.e., it would be preserved as 1.

#include <stdio.h>
void showbits(unsigned char);
int main()
{
    char num = -5, j, k;
    printf("\nDecimal %d is same as binary ", num);
    showbits(num);
    for (j = 1; j <= 3; j++)
    {
        k = num >> j;
        printf("\n%d right shift %d gives ", num, j);
        showbits(k);
    }
    return 0;
}
void showbits(unsigned char n)
{
    int i;
    unsigned char j, k, andmask;
    for (i = 7; i >= 0; i--)
    {
        j = i;
        andmask = 1 << j;
        k = n & andmask;
        k == 0 ? printf("0") : printf("1");
    }
}