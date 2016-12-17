#include <stdio.h>
#include "Prime.h"

int Is_Prime(int n)                      /*prototype to check is number prime or not*/
  {
  	int i;
    for (i = 2; i < n ; i++ )  
   	 {
        if ( n % i == 0 ) 
            return 0;                    /*if remainder is 0,then return 0*/
     }
        return 1;                        /*if remainder is not 0,then return 1*/
  }



int SiradakiPrime(int n)                 /*prototype to find the next prime number*/
{
    int i,j;
    for(i=n+1;i>n;i++)                   /*loop giving numbers after entered integer number*/
    {
        for(j=2;j<=i;j++)                 /*loop giving divisor numbers */
        {
            if(i%j==0)                   /*if remainder is 0,then break the loop*/
                break;                   
        }
            if(i==j)                     /*if dividend and divider are equal(their remainder is one),then it's the prime number*/
             {
	    	   printf("The next prime number is :%d\n",i);
               break;
			 }
    }
    return 0;
}
