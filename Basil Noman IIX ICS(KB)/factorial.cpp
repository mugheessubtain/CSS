#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,f=1,num;
	printf("input number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	printf("%d factorial is %d",num,f);
}
