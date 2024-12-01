#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int *ptr = (int *)malloc(n * sizeof(int));
        int *frequency = (int *)calloc(10002, sizeof(int));

        if (ptr == NULL || frequency == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &ptr[i]);
            frequency[ptr[i]]++;
        }

        int maxfreq = 0, smallest = 10001;
        for (int i = 1; i <= 10001; i++) {
            if (frequency[i] > maxfreq) {
                maxfreq = frequency[i];
                smallest = i;
            } else if (frequency[i] == maxfreq && i < smallest) {
                smallest = i;
            }
        }

        printf("%d\n", smallest);

        free(ptr);
        free(frequency);
    }

    return 0;
}
