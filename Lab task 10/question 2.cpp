
#include<stdio.h>

int percentage(int n,int i){
	
	float per;
	if(i==101)
	return 0;

	per = n * i /100; 
	printf("%d percentage  = %.2f \n",i, per);
	i++;
	percentage(n , i);

	
}



int main(){
	int n;
	scanf("%d",&n);
	percentage (n , 1);
	return 0;
}
