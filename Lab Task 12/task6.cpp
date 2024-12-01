#include<stdio.h>
#include<stdlib.h>


int main(){
	printf("Please Enter total number of input ");
	int n;
	scanf("%d",&n);
	int *ptr= (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		
		do{
    	printf("\nEnter Number %d :",i+1);
		scanf("%d",&ptr[i]);
	
		}while(ptr[i]>100 || ptr[i]<0);
	}	int max=0;
	for(int i=0;i<n;i++){
		if(max<ptr[i]){
			max=ptr[i];
		}
	}
	printf("The largest Number is %d",max);
	free(ptr);
	return 0;
}