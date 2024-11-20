#include<stdio.h>
#include<string.h>


int revrse (char string[],int a){
int z = a;
printf("%c",string[z]); 
if(z == 0){
return 0;
}

revrse(string, z -1 ); 

}


int main(){
	char str[] = "hello world ";
	scanf("%[^\n]s", &str);

	revrse(str, strlen(str)-1);


return 0;
}
