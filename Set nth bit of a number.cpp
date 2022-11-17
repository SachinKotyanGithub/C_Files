#include<stdio.h>

int main()
{
	int num, n, final;
	printf("Enter an an Number to set bits:\n");
	scanf("%d",&num);
	printf("Enter an an bit number to set bits:\n");
	scanf("%d",&n);
	
	final = num|(1<<n);
	printf("Final number is %d", final);
	
	return 0;
}
