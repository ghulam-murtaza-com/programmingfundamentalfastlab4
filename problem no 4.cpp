#include<stdio.h>
int main ()
{
	int totalpurchaseamount;
	char membership;
	
	printf("Enter your total purchase :");
	scanf("%d",&totalpurchaseamount);
	
	printf("Enter your Member ship status 'Y' for yes and 'N' for No: ");
	scanf(" %c",&membership);
	
	(membership=='Y' && totalpurchaseamount>100)? printf("Valid Discount Applied :)"):printf("Not Valid for Discount :(");
	
}
