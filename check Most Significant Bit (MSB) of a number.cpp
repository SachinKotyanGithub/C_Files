#include<stdio.h>
#define BITS sizeof(char)*8
int main()
{
	char num;
	
	printf("Enter an number to check\n");
	printf("sizeof(char) id %C \n",BITS);
	scanf("%c",&num);
	printf("BITS<<1 is  %C \n",1<<(BITS-1));
	if(num&(1<<(BITS-1)))
		printf("Numbers MSB is High(1)");
	else
		printf("Numbers MSB is Low(0)");
	return 0;

}
