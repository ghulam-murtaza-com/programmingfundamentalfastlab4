#include<stdio.h>
int main(){
	int num,i=1;
	printf("Enter the Number Please : ");
	scanf("%d",&num);
	
	while(num>1)
	{	if(num%2==0)
		{
		printf("%d ",num);
		}
		num--;
	}
	return 0;
}
