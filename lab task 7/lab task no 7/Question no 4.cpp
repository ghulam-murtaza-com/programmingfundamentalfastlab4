
#include <stdio.h>
int main(){
    int n[15],arraysum=0,i;
    printf("Please Put 15 numbers:\n");
    for(i= 0; i < 15; i++){
        printf("Number %d: ", i + 1);
        scanf("%d", &n[i]);}
    for(i = 0; i < 15; i++){
        arraysum += n[i];
    }
    
    printf("The sum is: %d\n",arraysum);
    return 0;
}
