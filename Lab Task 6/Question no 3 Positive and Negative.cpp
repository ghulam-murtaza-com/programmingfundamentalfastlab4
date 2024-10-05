#include<stdio.h>
int main(){
	int n;

	do{	
		scanf("%d",&n);
		if(n>0)
		printf("Hell yeah ~<_%d_>~",n);
		else
		printf("Please put positive integer");	
		
	}while(n<0);
	
	return 0;
}
