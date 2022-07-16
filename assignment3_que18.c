//18. Write a program which takes the month number as an input and display number of
//days in that month
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number of months");
	scanf("%d",&a);
	if(a==1)
		printf("31 day");
	else if(a==2)
		printf("29 day");
	else if(a==3)
		printf("31 day");
	else if(a==4)
		printf("30 day");
	else if(a==5)
		printf("31 day");
	else if(a==6)
		printf("30 day");
	else if(a==7)
		printf("31 day");
	else if(a==8)
		printf("31 day");
	else if(a==9)
		printf("30 day");
	else if(a==10)
		printf("31 day");
	else if(a==11)
		printf("30 day");
	else if(a==12)
		printf("31 day");
	else
		printf("invalid months ");

}
