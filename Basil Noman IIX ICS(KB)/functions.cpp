#include<stdio.h>
int max(int num1,int num2);
int min(int num1,int num2);
int main()
{
	int num1,num2,maximum,minimum;
	printf("enter any first number:");
	scanf("%d",&num1);
	printf("enter any second number:");
	scanf("%d",&num2);
	maximum=max(num1,num2);
	minimum=min(num1,num2);
	printf("\nMaximum=%d\n",maximum);
	printf("\nMinimum=%d\n",minimum);
	return 0;
}
int max(int num1, int num2)
{
	return(num1>num2)?num1:num2;
}
int min(int num1, int num2)
{
	return(num1>num2)?num2:num1;
}
