#include<stdio.h>
int main(){
	int m,n;
	int count = 0;
	printf("Enter Dimension of the matrix rows: ");
	scanf("%d",&m);
	
	printf("Enter Dimension of the matrix column: ");
	
	scanf("%d",&n);
	
	int matrixfirst [m][n];
	int matrixsecond[m][n];
	
	
	printf("\nEnter First Matrix Element for this \n");
	for (int i=0;i<m;i++){	
		for (int j=0;j<n;j++){
		count++;
		printf("a%d ",count);
		}
		printf("\n");
	}
	count=0;
	for (int i=0;i<m;i++){	
		for (int j=0;j<n;j++){
		count++;
		printf("Enter Element a%d :",count);
		scanf("%d",&matrixfirst[i][j]);
		}
		printf("\n");
	}
	
	
	count =0;
	printf("\nEnter Second Matrix Element for this \n");
	for (int i=0;i<m;i++){	
		for (int j=0;j<n;j++){
		count++;
		printf("b%d ",count);
		}
		printf("\n");
	}
	count=0;
	for (int i=0;i<m;i++){	
		for (int j=0;j<n;j++){
		count++;
		printf("Enter Element b%d :",count);
		scanf("%d",&matrixsecond[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe Researchers Combine Results : \n");
	for (int i=0;i<m;i++){	
		for (int j=0;j<n;j++){
		printf("%3d ",matrixfirst[i][j]+matrixsecond[i][j]);
		}
		printf("\n");
	}

		
	return 0;
}
