//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character ");
	scanf("%c",&ch);
	if(ch>65 && ch<90)
		printf("alphabet is in uppercase ");
	else
		printf("alphabet is in lowercase ");
	return 0;
}
