//16. Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character ");
	scanf("%c",&ch);
	if(ch>48 && ch<57)
		printf("Number ");
	else if(ch>58 && ch<64)
		printf(" special character");
	else if(ch>65 && ch<90)
		printf("alphabet is in uppercase ");
	else
		printf("alphabet is in lowercase ");
	return 0;
}
