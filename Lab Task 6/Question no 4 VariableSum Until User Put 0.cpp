#include<stdio.h>

int main (){
	int variable,userinput;
	printf("Enter the Number : "); 
	do{
		scanf("%d",&userinput);
		variable+=userinput;
		if(userinput!=0)
		printf("Please Enter the zero");
	
	
	}while(userinput!=0);
	
	printf("The total variable sum is %d",variable);
	return 0;
}
