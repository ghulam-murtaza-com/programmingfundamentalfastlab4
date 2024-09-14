#include<stdio.h>

int main(){
	int timehour;
	printf("Put the Time in Hours from 0 to 23 : ");
	
	scanf("%d",&timehour);
	
	
	if(timehour>=6 && timehour<12)
	printf("Good Morning");
	
	else if(timehour>=12 && timehour<18)
	printf("Good Afternoon");	
		
	else if(timehour>=18 && timehour<23)
	printf("Good Evening");
	
	else if(timehour>=0 && timehour<=5)
	printf("Good Night");
	
	else 
	printf("Invalid time hour ");
	
	return 0;
}
