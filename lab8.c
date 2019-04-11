// Name : Jose Delgado
// date : 7-10-2018
// work : Lab8
// class: CS 3335
#include<stdio.h>

int main()
{
 //delcarations of type int
 int m,n;

 //prompting user for two different integers
 printf("Please enter in first integer: ");
 scanf("%d",&m);

 printf("\nPlease enter in second integer: ");
 scanf("%d",&n);

 //printing the result while calling in the method
 printf("\nYour gcd = %d", gcd(m,n));

}

int gcd(int m, int n)//implementing the gcd method
{
 if(m == 0)//if the first integer is 0 we just print the second integer
 {
   return n;
 }else//else we recall the method  with the remainder of the two and pass the first integer again
 {
   return gcd(n%m,m);
 }
}
