#include<stdio.h>
int main(){
	int n;
	printf("Enter N: \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
		printf(" ");
		}
		for(int k=n-i;k>0;k--){
		printf("%d ",k);
		}
		printf("\n");
	}
	for(int k=1;k<=n;k++){
	   	if(k==1){
		continue;
	}
   	for(int j=0;j<n-k;j++){
		printf(" ");
		}
	
	for(int j=k;j>=1;j--){
	printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}

