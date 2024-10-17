#include<stdio.h>
int main(){
	int array[10];
	
	for(int i= 0;i<10;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&array[i]);

	}

	printf("Before : ");
	for(int i= 0;i<10;i++){	
	printf("%d ",array[i]);
	}
	
	
	printf("\nAfter : ");
	for(int i= 0;i<10;i++){
	if(i == 9)
	printf("%d ",array[0]);
	else	
	printf("%d ",array[i+1]);
	}
	
	
	return 0;
}
