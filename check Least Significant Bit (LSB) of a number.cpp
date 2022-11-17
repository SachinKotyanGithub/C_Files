#include<stdio.h>

int main()
{
	int num;
	
	 /* Input number from user */
	printf("Enter an number\n");
	scanf("%d",&num);
	
	if(num&1)
		printf("LSB bit is Hign(1)");
	else
		printf("LSB bit is Low(0)");
	return 0;
}
