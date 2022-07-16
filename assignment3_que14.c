//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
	int n;
	printf("enter any number ");
	scanf("%d",&n);
	if(n%7==0 && n%3==0)
		printf("number is divisible by 7 and divisible by 3");
	else
		printf("not divisible by 8 and divisible by 3");
}
