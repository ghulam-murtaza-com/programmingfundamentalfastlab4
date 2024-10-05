#include<stdio.h>
int main(){
	int a=-1,b=1,N=0,number,i,count=0,c;
	
	
	printf("Enter the number :  ");
	scanf("%d",&N);
	number=N;
	for(i=2;i<N;i++){
		if(N%i==0)
		{
			count=1;
		break;
		}
	}
	if(count==1)
	printf("\nThis is not prime number");
	else
	printf("\n%d is Prime Number",number);
	
	
	if(count!=1)
	{
		printf("\nThe Fibonacci Number Series is :\n");
		for(i=1;i<=N;i++){
		c=a+b;	
		printf("%d ",c);
		a=b;
		b=c;
			
	}	
	}
	return 0;
}
