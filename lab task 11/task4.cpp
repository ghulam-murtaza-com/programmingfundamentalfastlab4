#include<stdio.h>

struct employee{
	char Name[20];
	char DateofBirth[20];
	int EmployeeID;
	char Department[25];
	int Salary;
};
struct employee e[100];
int n=0;
void add (){
	printf("Name ");
	scanf("%s",&e[n].Name);
	printf("Date of Birth");
	scanf("%s",&e[n].DateofBirth);
	printf("Employee ID ");
	scanf("%d",&e[n].EmployeeID);
	printf("Department");
	scanf("%s",&e[n].Department);
	printf("Salary");
	scanf("%d",&e[n].Salary);
	n++;
}
void displayall(){
	for (int i=0;i<n;i++){
	printf("Name : %s",e[i].Name);printf("\n");
	printf("Date of Birth : %s",e[i].DateofBirth);printf("\n");
	printf("Employee ID : %d",e[i].EmployeeID);printf("\n");
	printf("Department : %s",e[i].Department);printf("\n");
	printf("Salary: %d",e[i].Salary);printf("\n");
	}
}
void del(){
	int id;
	printf("Please Enter your ID : ");
	scanf("%d",&id);
	for(int i=0;i<n;i++){
		if(e[i].EmployeeID==id){
		printf("Deleted Successfully");
		n--;
		while(i<n){
			e[i].EmployeeID = e[i + 1].EmployeeID;
			i++;
		}
		}
	}
	
	
	
}
void menu(){
	int option;
	do{
	printf("1.Add an Employee \n");
	printf("2.Delete an Employee\n");
	printf("3.Display All Employees\n");
	printf("4.Exit\n");
	printf("Please Enter the Option Number :");
	scanf("%d",&option);
	if(option==1) add();
	else if(option==2) del();
	else if(option==3) displayall();
	else if(option==4) return;
	else printf("Invalid Option");
	}while(option != 4);
//	return 0;
}
int main(){
	menu();
	return 0;
}