#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int onlyevenprint(int *onlyeven,int size){
	for(int i=0;i<size;i++){
		scanf("%d",&onlyeven[i]);
	//		fflush(stdin);
	}

	for(int i=0;i<size;i++){
		if(onlyeven[i]%2!=0){
			onlyeven[i]--;
		}
	}
	return 0;
}
int main()
{
	int size;
	printf("Array Size do you want : ");
	scanf("%d",&size);
	int *onlyeven= (int *)malloc(size*sizeof(int));
	onlyevenprint(onlyeven,size);
	for(int i=0;i<size;i++){
		printf("%d ",onlyeven[i]);
	}
	free(onlyeven);
 	return 0;
}