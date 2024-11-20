//Write a recursive function that calculates the sum of digits of a number. For example, if the
//input is 123, the output should be 6. task 5


#include<stdio.h>
int sumofdigit(int n,int sum){
	int rem = 0;
	if(n==0)
	return sum;
	rem = n %10;
	n = n /10;
	return sum = rem + sumofdigit(n,sum);	
}
int main(){
	//Write a recursive function that calculates the sum of digits of a number. For example, if
//the input is 123, the output should be 6.
	int n= 523;
 	int sum = 0;
	printf("%d",sumofdigit(n,sum));	
//	printf("%d",sum);
	return 0;
}
