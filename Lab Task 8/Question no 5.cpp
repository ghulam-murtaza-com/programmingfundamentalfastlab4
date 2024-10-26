#include<stdio.h>
int main(){
	int m=4,n=4 ;
	int count = 0,a;
	
	int matrixfirst [m][n];
	int ascmatrixfirst [m][n];

	
	printf("\nTeam1 Team2  Team3 Team4\n");
	for (int i=0;i<m;i++){	
		for (int j=0;j<n;j++){
		count++;
		printf("%3da  ",count);
		}
		printf("\n");
	}
	count=0;
	
	
	printf("\nPut Scores Here : \n");
	
	for (int i=0;i<m;i++){	
		for (int j=0;j<n;j++){
		count++;
		printf("Enter Score %da :",count);
		scanf("%d",&matrixfirst[i][j]);
		ascmatrixfirst[i][j]=matrixfirst[i][j];
		}
		printf("\n");
	}
	for(int i=0;i<m;i++){
		for(int j = 0;j < n-1; j++){
			for(int k = j + 1;k < n; k++){
				if(ascmatrixfirst[j][i]>ascmatrixfirst[k][i])
				{
				a=ascmatrixfirst[j][i];
				ascmatrixfirst[j][i]=ascmatrixfirst[k][i];
				ascmatrixfirst[k][i]=a;
				}
			}
				
		}
	}
	printf("\nBefore : ");
	printf("\nTeam1 Team2  Team3 Team4\n");		
	for(int i=0;i<m;i++)
	{
		for(int k=0;k<n;k++)
		{	
		printf("%5d ",matrixfirst[i][k]);
		}
		printf("\n");
	}
	
	printf("\nAfter : \n");
	printf("\nTeam1 Team2  Team3 Team4\n");
	
	for(int i=0;i<m;i++)
	{
		for(int k=0;k<n;k++)
		{	
			printf("%5d ",ascmatrixfirst[i][k]);
		}
	printf("\n");
	}
	
	return 0;
}
