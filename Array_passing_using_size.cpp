#include<stdio.h>

struct SumAvg
{
    float Sum;
    float Avg;
}SumAvg1;

void getAverage(int array[],int size)
{
	float A;
	float S;

	for(int i=0; i<=(size-1); i++)
	{
		S+=array[i];
		//printf("sum %d\n",S);
	}
	
	A = S/size;
	SumAvg1 = { A, S};
//	return average,sum;
}

int main()
{
	
	int h[5]={5,6,7,8,9};
	int J[5]={12,6,7,8,9};
	
	int s=sizeof(h)/sizeof(h[0]);
	int S1=sizeof(J)/sizeof(J[0]);
	
	
	getAverage(h,s);
	printf("sum %f\n",SumAvg1.Avg);
	printf("average %f\n",SumAvg1.Sum);
	
	getAverage(J,S1);
	printf("sum %f\n",SumAvg1.Avg);
	printf("average %f\n",SumAvg1.Sum);
	
}



