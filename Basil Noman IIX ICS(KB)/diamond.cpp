#include<stdio.h>
#include<conio.h>
int main(void)

{
	int i,j,N;
	printf("enter the value of N ");
	scanf("%d",&N);
	for(i=1;i<N;i++)
	{
		for(j=i;j<N;j++)
		{
			printf("+");
		}
		printf("\n");
	}
	
}
