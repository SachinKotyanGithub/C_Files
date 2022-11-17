#include<stdio.h>
#define MAXSIZE sizeof(int)*8
int main()
{
	int num, n,final;
	printf("Enter number to check Lowest its bit:\n");
	scanf("%d",&num);
	
	for(int i=0; i<MAXSIZE; i++)
	{
	
		final = num&(1<<i);
		if(final)
		{
			printf("Highest set bit is %d",i);
			break;
		}
	}	
	return 0;
}
