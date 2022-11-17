#include<stdio.h>

int main()
{
	int input,remainder, reverse=0;
	
	printf("Enter an number\n");
	scanf("%d", &input);
	int n=input;

	while(input!=0)
	{
		remainder= input%10;
		reverse = (reverse*10) + remainder;
		input/=10;
	}

	if (n==reverse)
	{
		printf("%d is an palindrome\n",n);
	}
	else
	{
		printf("%d is not palindrome\n",n);
	}
	return 0;
}
