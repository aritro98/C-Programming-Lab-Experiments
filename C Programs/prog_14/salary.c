#include <stdio.h>
int main()
{
	int bs,hra,da,gs;
	printf("Enter the Basic Salary of an Employee:");
  	scanf("%d",&bs);
  	if (bs<=10000)
  	{
  		hra=(bs*20)/100;
		da=(bs*80)/100;    	
  	} 
  	else if (bs<=20000)
  	{
  		hra=(bs*25)/100;
	  	da=(bs*90)/100;  	
  	}
  	else if (bs>20000)
  	{
	   	hra=(bs*30)/100; 
	   	da=(bs*95)/100;
    }
	gs=bs+hra+da;
	printf("Gross Salary of the Employee is:%d",gs);
  	return 0;
}
