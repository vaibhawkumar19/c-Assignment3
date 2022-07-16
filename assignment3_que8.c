//8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("enter year ");
	scanf("%d",&year);
	if(year%4)
		printf(" not leap year");
	else if(year%100)
		printf("leap year");
	else if(year%400)
		printf("not leap year");
	else
		printf("Leap Year");
	return 0;
}
/* int year;
 printf("enter year ");
 scanf("%d",&year);
 if(year%100==0)
	 {
 	 if(year%400==0)
 		printf("leap year ");
 	 else
 		printf("not leap year ");
 	 }
 	 else
 	 {
 	 if(year%4==0)
 		printf("leap year ");
 	else
 		printf("not leap Year ");	
	}return 0;
}*/
