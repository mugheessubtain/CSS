#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a,b;
	printf("enrter the multiplication number: ");
	scanf("%d",&a);
	b=1;
	while(b<=50)
	{
		printf("\n %d * %d = %d",a,b,a*b);
		b++;
	}
	
}
