#include<stdio.h>

struct SumAvg
{
    float Sum;
    float Avg;
}SumAvg1;

void getAverage(int arr[])
{
	float A;
	float S;

int s1=sizeof(arr)/sizeof(arr[0]);
printf("size %d\n",s1);
	for(int i=0; i<s1 ;i++)
	{
		S+=arr[i];
		
	}
	
	A = S/s1;
	SumAvg1 = { A, S};
//	return average,sum;
}

int main()
{
	
	int h[5]={5,6,7,8,9};
	int J[5]={12,6,7,8,9};
	
	int s=sizeof(h)/sizeof(h[0]);
	int S1=sizeof(J)/sizeof(J[0]);
	
	
	getAverage(h);
	printf("sum %f\n",SumAvg1.Avg);
	printf("average %f\n",SumAvg1.Sum);
	
	getAverage(J);
	printf("sum %f\n",SumAvg1.Avg);
	printf("average %f\n",SumAvg1.Sum);
	
}



