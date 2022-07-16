//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
	int num;
	printf("enter the no ");
	scanf("%d",&num);
	if(num>0)
		printf("number is positive ");
	else
		printf("number is non-posative");
	return 0;
}
