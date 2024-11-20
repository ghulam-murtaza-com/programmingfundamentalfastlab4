#include<stdio.h>
#include<string.h>


//function to Reverse the Order 
int revrse (char string[],int a){
int z = a; // copy the index then it will be decrease by 1

printf("%c",string[z]); // print each digit from reverse 
if(z == 0){
return 0;
}

revrse(string, z -1 ); // recursion 

}


int main(){
	char str[] = "hello world ";
	scanf("%s", &str);

	revrse(str, strlen(str)-1);


return 0;
}
