//5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
	int num;
	printf("enter the digit number ");
	scanf("%d",&num);
	if(num>=100 && num<=999)
		printf("three-digit number ");
	else
		printf("Not three-digit number");
	return 0;
}
