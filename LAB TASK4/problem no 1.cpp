#include<stdio.h>

int main(){
	int num1,num2;
	printf("Please put first number ");
	scanf("%d",&firstnumber);
	
	printf("Please put second number ");
	scanf("%d",&num2);
	
	if(firstnumber>num2)
	{	
		if(firstnumber>100)
		printf("First number is significantly larger ");
		else
		printf("First number is larger");
		
		}
	else
	{	if(firstnumber<0)
		{printf("First number is negative and smaller");}
		else if(num2>firstnumber) 
		{printf("First number is smaller");
		}
		if(firstnumber==secondnumber)
		printf("Both Numbers are Equal");
	}
	return 0;
}
