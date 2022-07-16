//6. Write a program to print greater between two numbers. Print one number of both are
//the same.
#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter the first numebr ");
	scanf("%d",&a);
	printf("enter the second numebr ");
	scanf("%d",&b);
	if(a>b)
		printf("%d is greater ",a);
	else if(a<b)
		printf("%d is greatre ",b);
	else
		printf("both are equal ",a,b);
	
}
