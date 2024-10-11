
#include <stdio.h>
int main(){
    int n[20],k=19,i;
    printf("Please Put 20 numbers:\n");
    for(i= 0; i < 20;){
    printf("Number %d: ", i + 1);
    scanf("%d", &n[i]);
	i++;
	}
    while(k!=0)
    {
    	printf("%d",n[k]);
		k--;
	}
		
		
		return 0;
}
