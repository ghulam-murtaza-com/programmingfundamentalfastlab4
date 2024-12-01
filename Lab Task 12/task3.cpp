#include<stdio.h>
#include<stdlib.h>
#include<string.h>
1          
5           
1 2 3 4 5   
I 10 3      
D 2         
END 
int main (){
	int option;
	int filledvalues=0,st=4;
	float *f=(float* )malloc(st*sizeof(float));
	do{
		
	printf("\n1. Add a new number to the array.\n");
	printf("2. Display all numbers in the array.\n");
	printf("3. Remove the last number from the array (if not empty).\n");
//	printf("4 Reduce the memory size to fit the current number of elements if the array's usage"); (Its Actually i Done in line no 10
	printf("4.(EXIT) Free the allocated memory before the program terminates.\n");
	printf("-- Enter the Option you want to Select example 1,2..etc : ");
	scanf("%d",&option);
	if(filledvalues==st){
			st+=st;
			f=(float*)realloc(f,st*sizeof(float));
			printf("\nSuccessfully Memory Alloted because past Memory is filled :)");
		}
		else if(option ==1){
			getchar();
			scanf("%f",&f[filledvalues]);
			filledvalues++;
			printf("\nSucceesfully Added\n");
		}
		else if(option==2){
			for(int i=0;i<filledvalues;i++){
				printf("%.2f ",f[i]);
			}
			printf("\nDisplayed Successfully \n");
		}
		else if(option==3){
			f[filledvalues]='0';
			filledvalues--;
		}
		else if(option==4){
			free(f);
			return 0;
		}
		else{
			printf("\nInvalid Input \n");
		}
	}while(option!=5);
	
	

}