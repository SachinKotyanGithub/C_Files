#include<stdio.h>
int main()
{
	int num, n,final;
	printf("Enter number to clear its bit:\n");
	scanf("%d",&num);
	printf("Enter bit position to clear bit:\n");
	scanf("%d",&n);
	
	final = num&(~(1<<n));
	printf("Final number id : %d\n", final);
	return 0;
}
