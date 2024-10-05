#include<stdio.h>
int main(){
	int i,n,factorial=1;
	printf("Enter the Number which you want factorial :");
	scanf("%d",&n);
	
	if(n<0){
	printf("Please Put positive integer.");
	return 0;
	}
	else
	{for(i=1;i<=n;i++){
		factorial=factorial*i;} 
	}
	
	printf("%d",factorial);
	
	return 0;
}


