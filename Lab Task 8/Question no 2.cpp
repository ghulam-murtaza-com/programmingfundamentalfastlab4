#include<stdio.h>
int main(){
int matrix[4][4];
	printf("Enter Marks \n");
	for(int i=0 ; i<4 ; i++){
		printf("Student %d : \n",i+1);
		
	for(int j=0 ; j<4 ; j++){
		printf("Subject %d : ",j+1);
	scanf("%d ",&matrix[i][j]);	
	}
	}
	
	printf(" \nOld : \n");
for(int i=0 ; i<4 ; i++){
	for(int j=0 ; j<4 ; j++){
	printf(" %d ",matrix[i][j]);
	}
	printf("\n");
	}
	for(int i=0 ; i<4  ; i++ ){
	for(int j=0 ; j<4 ; j++)
	if(matrix[i][j]<0){
	matrix[i][j]=0;
	}
	}	
	printf(" \nCorrected : \n");
	for(int i=0 ; i<4 ; i++){
	for(int j=0 ; j<4 ; j++){
	printf(" %d ",matrix[i][j]);
	}
	printf("\n");
	}
}

