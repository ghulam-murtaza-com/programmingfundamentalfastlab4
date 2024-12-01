#include<stdio.h>
#include<stdlib.h>

int main(){
	int **ptr= (int**)malloc(7*sizeof(int*));
	for(int i=0;i<7;i++){
		ptr[i]=(int*)malloc(4*sizeof(int));
	}
	for(int i=0;i<7;i++){
		for(int j=0;j<4;j++){
		ptr[i][j]=i*j*2;
	    }	
	}
	for(int i=0;i<7;i++){
		for(int j=0;j<4;j++){
		printf("%d ",ptr[i][j]);
	    }
		printf("\n");	
	}
	printf("\n");
	printf("\nUPDATED\n");
	for(int i=0;i<7;i++){
		for(int j=0;j<4;j++){
			ptr[i][j]=i+1;
		printf("%d ",ptr[i][j]);
	    }
		printf("\n");	
	}
	for(int i=0;i<7;i++){
		free(ptr[i]);
	}
	free(ptr);
	return 0;
}