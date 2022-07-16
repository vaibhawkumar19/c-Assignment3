//4. Write a program to check whether a given number is an even number or an odd
//number without using % operator.
#include<stdio.h>
int main()
{
	int num;
	printf("enter the no ");
	scanf("%d",&num);
	if(num/2*2==num)
		printf("even Number ");
	else
		printf("odd Number");
	return 0;
}
