#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter Number of Rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if(i==1 ||i + j == n+1 || j==1 || i == n || j == n || i==j)
			printf("*");
			else
			printf(" ");
		
		}
			printf("\n");
	}
	
	
	return 0;
}
