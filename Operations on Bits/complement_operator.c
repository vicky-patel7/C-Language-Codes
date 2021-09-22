// ~ This operator is called One's complement operator. The work of this operator is to set all 1's to 0 and 
// vice versa. Ex- The binary equivalent of 65 is 01000001 so using ~ this operator on 65 will give us value 
// as 10111110 
// This operator symboll is known as tilde
#include<stdio.h>
int main()
{
    int n = 65;
    int num = ~n;
    printf("~n = %d\n", num);
    printf("~n = %x\n", num);
    printf("~n = %X\n", num);
    printf("~n = %#X\n", num);
    return 0;
}
// Bitwise complement of any number N is -(N+1). Here's how:
// bitwise complement of N = ~N (represented in 2's complement form)
// 2'complement of ~N= -(~(~N)+1) = -(N+1)
#include <stdio.h>
int main()
{
    printf("Output = %d\n",~35);
    printf("Output = %d\n",~-12);
    return 0;
}


