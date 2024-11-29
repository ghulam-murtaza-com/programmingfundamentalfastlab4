#include<stdio.h>
struct phone{
	int area;
	int exchange;
	int number;
}e[2];
int main(){
	//initialize
	
	e[0].area = 212;
	e[0].exchange = 767;
	e[0].number = 8900;
	
	
	//takeinputed
	printf("Enter area code: ");
	scanf("%d",&e[1].area);
	printf("Enter exchange: ");
	scanf("%d",&e[1].exchange);
	printf("Enter number: ");
	scanf("%d",&e[1].number);
	int i=1;
	printf("My number is %d %d-%d \n",e[0].area,e[0].exchange,e[0].number);
	printf("Your number is %d %d-%d ",e[i].area,e[i].exchange,e[i].number);

	
	
	
	return 0;
}