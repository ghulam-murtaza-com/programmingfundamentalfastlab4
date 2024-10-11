
#include <stdio.h>
int main(){
	int index=30;
	int max=0,min;
	int n[index],i;
    printf("Please Put 30 numbers:\n");
    for(i= 0; i < index;){
    printf("Number %d: ", i + 1);
    scanf("%d", &n[i]);
    if(n[i]>max)
 	   {
    	max=n[i];
		}
    if(n[i]<min)
    	{
    	min=n[i];
		}
    i++;
	}
	printf("Maximum = %d \n",max);
	printf("Minimum = %d \n",min);
	

		return 0;
}
