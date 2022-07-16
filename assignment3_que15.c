//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	if(n>0)
		printf("positive %d",n);
	else if(n<0)
		printf("Negative %d",n);
	else
		printf("zero %d",n);
	return 0;
}
	
