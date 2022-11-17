#include<stdio.h>
#define MAXSIZE sizeof(int)*8
int main()
{
	int num, n,final;
	printf("Enter number to clear its bit:\n");
	scanf("%d",&num);
	
	for(int i=0; i<MAXSIZE; i++)
	{
	
		final = num&(1<<((MAXSIZE-1)-i));
		if(final)
		{
			printf("Highest set bit is %d",((MAXSIZE)-i));
			break;
		}
	}	
	return 0;
}
