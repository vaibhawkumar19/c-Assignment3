//9. Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three no ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
		printf("%d is greater ",a);
	if(b>a && b>c)
		printf("%d is greater ",b);
	if(c>a && c>b)
		printf("%d is greater ",c);
	return 0;
}
