 #include<stdio.h>
int main(){
	int matrix[3][3],i,count=0;
	printf("Enter Score like that :\n");
	for (int i=1;i<=9;i++){
		printf("a%d ",i);
		if(i==3 || i==6 || i==9)
		printf("\n");
	}
	int k=0;
	for (int j=0;j<3;j++)
	{
	for(int f=0;f<3;f++){		
	printf("Enter Score a%d ",count+1);
	scanf("%d",&matrix[j][f]);
	count++;
	}	
	}
		printf("Row1 Sum : %d",matrix[0][0]+matrix[0][1]+matrix[0][2]);		
		printf("\nRow2 Sum : %d",matrix[1][0]+matrix[1][1]+matrix[0][2]);
		printf("\nRow3 Sum : %d",matrix[2][0]+matrix[2][1]+matrix[2][2]);
		
		
		printf("\nColumn1 Sum : %d",matrix[0][0]+matrix[1][0]+matrix[2][0]);		
		printf("\nColumn2 Sum : %d",matrix[0][1]+matrix[1][1]+matrix[2][1]);
		printf("\nColumn3 Sum : %d",matrix[0][2]+matrix[1][2]+matrix[2][2]);
		
	return 0;
}


