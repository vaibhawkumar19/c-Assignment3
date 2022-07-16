//10. Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
	int sp,cp,profit,loss;
	printf("enter the selling price and cost price of the product ");
	scanf("%d %d",&sp,&cp);
	if(sp>cp)
			printf("\n profit is %d ",sp-cp);
	else
			printf("\n loss is %d",cp-sp);
	return 0;
}
