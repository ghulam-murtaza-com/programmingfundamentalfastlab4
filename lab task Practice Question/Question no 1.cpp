#include<stdio.h>
int addition=0;
void task1(int numofboxes,int fixed_weight);
int main(){
	int numofboxes;
	int fixed_weight;
	printf("\nPlease Enter the NumofBoxes :");scanf("%d",&numofboxes);
	printf("\nPlease Enter the fixed_Weight:");scanf("%d",&fixed_weight);
	task1(numofboxes,fixed_weight);printf( "Addition of all weight is : %d",addition);	
}
void task1(int numofboxes,int fixed_weight){addition= addition + fixed_weight;	if(numofboxes==1)
	return;
	task1(numofboxes -1,fixed_weight);
}
