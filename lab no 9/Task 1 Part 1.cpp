#include <stdio.h>


void mainarrow(int N) {
    int rows= 2*N+1;
    for (int i=0; i<rows;i++) {
        for (int j = 0; j < rows; j++) {
      if (i <= N) {
               if (j >= N - i && j <= N + i) {
                    printf("o");
      } else {
      if(j>N)
        printf("    ");
        else
		printf(" * ");
                   
                }
            
    } else {
        if (j >= N-(rows-1-i) && j <= N+(rows-1-i)) {
      printf("o");
                } else { if(j>N)
        printf("    ");
        else
printf(" * ");
                    }
            }
        }
        printf("\n");
    }
}

int main() {
    int number ;
    printf("Number of Rows : ");
    scanf("%d",&number);
    mainarrow(number);
    return 0;
}
