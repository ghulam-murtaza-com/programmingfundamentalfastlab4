#include<stdio.h>
int main(){
	int arr[13]={1,1,1,1,1,1,5,1,1,1,1,1};
	int n,notfound=1,index=0;
	printf("Array : {1,1,1,1,1,1,5,1,1,1,1,1} \n");
	printf("Enter Integer to search : ");
	scanf("%d",&n);
	for(int i=0 ; i<13;i++)
	{	
			if(arr[i]==n){
		index=i;		
		notfound=1;
		break;
		}
	notfound=0;
	}	
	if(notfound==0)
	{
	printf("Number not found");
	}else{
		printf("%d found at index %d",n,index);
	}
}
