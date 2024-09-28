#include<stdio.h>
int main (){
	int angle1,angle2,angle3,check;
	
	printf("Put first Angle :");
	scanf("%d",&angle1);
	
	
	printf("Put second Angle :");
	scanf("%d",&angle2);
	
	
	printf("Put third Angle :");
	scanf("%d",&angle3);
	
	check=angle1+angle2+angle3;
	if(angle1>0 && angle2>0 && angle3>0 && check==180)
	printf("Valid triangle");
	else 
	printf("invalid traingle");
	
}
