#include<stdio.h>
int main (){
	int n;
	printf("Put the any number :");
	scanf("%d",&n);
	
	if(n>=1 && n<=20)
	{
		switch(n)
		{
			case 1:
			printf("one");
			break;
			
			case 2:
			printf("two");
			break;
	
			case 3:
			printf("three");
			break;
			
			case 4:
			printf("four");
			break;
			
			case 5:
			printf("five");
			break;
			
			
			case 6:
			printf("six");
			break;
			
			case 7:
			printf("seven");
			break;
			
			case 8:
			printf("eight");
			break;
			
			case 9:
			printf("nine");
			break;
			
			case 10:
			printf("ten");
			break;
			
			case 11:
			printf("eleven");
			break;
			
			case 12:
			printf("twelve");
			break;
			
			case 13:
			printf("thirteen");
			break;
		
			case 14:
			printf("fourteen");
			break;
			
			case 15:
			printf("fifteen");
			break;
			
			case 16:
			printf("sixteen");
			break;
			
			case 17:
			printf("Seventeen");
			break;
			
			case 18:
			printf("eightteen");
			break;
			
			case 19:
			printf("nineteen");
			break;
			
			case 20:
			printf("twenty");
			break;
}
		
		}
	else if(n>20){
	
	printf("Number is Greater than 20");	
	}
	else 
	printf("Number is less than 1");
	return 0;	
}
