#include<stdio.h>
int numofpieces[3];//--> numm of n piece contain in index numofpieces[n-1] 
void task2(int ropelength);
int main(){
	int ropelength;
	printf("Please Enter Rope length : ");scanf("%d",&ropelength);
	task2(ropelength);printf(" No of Unit-length 1 = %d\n No of Unit-length 2 = %d \n No of Unit-length 3 = %d",numofpieces[0],numofpieces[1],numofpieces[2]);
}
void task2(int ropelength)
{
	if(ropelength>=3) {
	numofpieces[2] +=1;
	task2(ropelength - 3);
	}else if(ropelength==2) {
	numofpieces[1] +=1;
	task2(ropelength - 2);
	}else if(ropelength==1){
	numofpieces[0] +=1;
	task2(ropelength - 2);
	}else return;
}