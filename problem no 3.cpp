#include<stdio.h>

int main(){
	float percentage;
	printf("Enter your Percentage");
	scanf("%f",&percentage);
	(percentage>=90 && percentage<=100)?printf("A"):
	(percentage>=80 && percentage<=89)?printf("B"):
	(percentage>=70 && percentage<=79)?printf("C"):
	(percentage>=60 && percentage<=69)?printf("D"):
	(percentage<60 )?printf("F"):printf("Invalid percentage");
}
