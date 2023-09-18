#include<stdio.h>
int main()
{
	int a,b,c,s=0;
	double avg;
	printf("Enter the numbers \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	s=a+b;
	avg=(a+b+c)/3.0;
	printf(" The average is %g",avg);
	return 0;
}
