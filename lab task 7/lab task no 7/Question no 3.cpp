#include<stdio.h>
int main(){
	int k=0,array[12],newarray[6];
	for(int i= 0;i<12;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&array[i]);

	}

	printf("Before : ");
	for(int i= 0;i<12;i++){	
	printf("%d ",array[i]);
	}
	
	
	printf("\nAfter : ");
	for(int i= 0;i<6;i++){	
	k+=2;
	newarray[i] = array[k-2] + array[k-1];
	printf("%d ",newarray[i]);

	}
	
 return 0;
}
