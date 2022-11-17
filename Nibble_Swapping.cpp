//Nibble_Swapping
#include<stdio.h>
int main()
{
	unsigned char num, final;
	printf("Enter a number to swap nibble\n");
	scanf("%x",&num);
	final =(num<<4)|(num>>4);
	printf("%x\n",final);
}
