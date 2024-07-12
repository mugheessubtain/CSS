#include<math.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	float x1,a,b,c,x2;
	printf("enter the value of a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	x1=(-b+sqrt(pow(b,2)-(4*a*c)))/2*a;
	x2=(-b-sqrt(pow(b,2)-(4*a*c)))/2*a;
	printf("the value of x1 is %d",x1);
	printf("/n the value of x2 is %d",x2);
}

