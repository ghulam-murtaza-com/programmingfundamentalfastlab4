#include<stdio.h>
int main(){
	int N,i,count=0;
	scanf("%d",&N);
	
	for(i=2;i<N;i++){
		if(i%N==0)
		{
			count=1;
		break;
		}
	}
	if(count==1)
	printf("This is not prime number");
	else
	printf("This is Prime Number");
	return 0;
}
