#include<stdio.h>

int main(){
	int number;
	printf("Enter the Number :");
	scanf("%d",&number);
	
	if((number & 1)==0)
	printf("The Number is Even ");
	else 
	printf("The Number is Odd");
}
