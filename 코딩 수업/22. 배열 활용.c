#include <stdio.h>

int main()
{
	/*
	int in1, in2, in3, in4, in5, in6, in7, in8, in9, in10; 
	int sum; 
	double avg; 
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &in1, &in2, &in3, &in4, &in5, &in6, &in7, &in8, &in9, &in10);
	sum = in1+ in2+ in3+ in4+ in5+in6+ in7+ in8+ in9+in10;
	
	avg = (double)sum/10;
	
	printf("sum = %d\n", sum);
	printf("average %.2f\n", avg);
	*/
	

	int i, sum=0; arr1[10];
	double avg;
	
	for(i=0; i<10; i++)
	{
		scanf("%d", arr1[i]);
		sum += arr[i];
	}
	avg = (double)sum/10;
	
	printf("sum = %d\n", sum);
	printf("average = %f\n", avg);

	return 0;
} 
