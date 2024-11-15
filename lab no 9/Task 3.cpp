 
#include<stdio.h>
#include<string.h>
int main(){
char username[20]="murtaza";
char password[20]="hacking";
char cusername[20];
char cpassword[20];

int a,b;
printf("Enter the Username : ");
scanf("%s",&cusername);

printf("Enter the Password : ");
scanf("%s",&cpassword);

a = strcmp (username,cusername);

b = strcmp (password,cpassword);
if(a==0 && b==0)
printf("Access Granted ");
else
printf("Access Denied ");



return 0;
}
