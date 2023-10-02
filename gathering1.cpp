#include<stdio.h>
   
int fact(int a)
{

    if(a>=1)
    {
    	return a*fact(a-1);
    	
	}
	else
	{
		return 1;
	}
}
main()
{
       
	   printf("factorial=%d",fact(5));
	  
} 
