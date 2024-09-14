#include<stdio.h>

int main(){
	float electricunit,totalbillamount,addsur;
	printf("Please Enter Electric Unit ");
    scanf("%f",&electricunit);
    
    if (electricunit <=30)
	{
        totalbillamount = electricunit * 0.60;
    }
	else if (electricunit <= 110)
	{
        totalbillamount = 30 * 0.60 ;
        electricunit= electricunit - 30 ;
        totalbillamount += electricunit * 0.85;
        
    } 
	else if (electricunit <= 210) { 
        totalbillamount = 30 *0.60 + 80* 0.85 ;
		electricunit = electricunit - 110;
		totalbillamount += (electricunit * 1.30);
    } 
	else {
        totalbillamount = 30 *0.60 + 80 *0.85 + 100 *1.30;
		electricunit= electricunit - 210;
		totalbillamount += (electricunit * 1.60);
    }
    addsur = totalbillamount*0.15;
    totalbillamount = totalbillamount + addsur;
    
    printf("electricity bill after surcharges : %.4f \n", totalbillamount);
    
    return 0;
}
