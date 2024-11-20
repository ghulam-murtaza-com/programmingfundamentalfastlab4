#include<stdio.h>
void print_array (int *arr, int nelem)
{
    if (--nelem > 0)                    
        print_array (arr, nelem);   
	printf ("%d\n", arr[nelem]);        
}

int main (void) {
    int arr[] = { 1, 2, 3,5,6 },nelem = sizeof arr/sizeof *arr;
    print_array (arr, nelem);
}