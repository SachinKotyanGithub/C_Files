#include<stdio.h>
int main()
{
	int num, n, bitstate;
	printf("Enter the number to check bit state: ");
	scanf("%d",&num);
	printf("Enter the bit position to check bit state: ");
	scanf("%d",&n);
	
	bitstate = ()num>>n)& 1;
	
	if(bitstate)
		printf("Bit state is High (1)");
	else
		printf("Bit state is Low (0)");
	
	return 0;
}
