#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int rows,columns;
	printf("Enter the Number of Students : ");
	scanf("%d",&rows);
	int **studentmatrix=(int **)malloc(rows*sizeof(int*));
	printf("\nEnter the Number of Grades : ");
	scanf("%d",&columns);
	
	for(int i=0;i<rows;i++){
	studentmatrix[i]=(int*)malloc(columns*sizeof(int));		
	}
	for(int i=0;i<rows;i++){
		printf("Enter Grade for Student %d\n",i+1);
		for(int j=0;j<columns;j++){
			printf("Grade %d :  ",j+1);
			scanf("%d",&studentmatrix[i][j]);
		}	
		printf("\n");
	}
	for(int i=0;i<rows;i++){
		printf("Student %d : ",i+1);
		for(int j=0;j<columns;j++)
		{
			printf("%d ",studentmatrix[i][j]);
		}
		printf("\n");
	}
	
	for(int i =0;i<rows;i++){
		free(studentmatrix[i]);
	}
	
	free(studentmatrix);
	return 0;
	
}