#include <stdio.h>
#include "Prime.h"
   
int main()
 {
   int n, result;
 
   printf("Enter an integer to check is it prime or not:");
   scanf("%d",&n);
 
   result = Is_Prime(n);                           /*result checks number by using function ,is it prime or not*/
 
   if ( result == 1 )                                 
      printf(" %d is prime number.\n", n);
   else
      printf(" %d is not prime number.\n", n);
      
      
    printf("\n", SiradakiPrime(n));                 /*gives the next prime number after entered integer*/
 
   return 0;
 }
 
 


