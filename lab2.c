#include<stdio.h>
//Name: Jose Delgado
//work: Lab2
//Date: 6/18/2018

int main (){
  int n;
  printf("Enter an Integer ");//prompting user for input
  scanf("%d", &n);//recieves input
  printf("The Fibonacci value for %d is %d",n,fibonacci(n));//prints the value of the n value, while calling the fibonacci method
  return 0;
}

int fibonacci(int n){
   if (n <= 1){//if statement if anything is lower than 1 it prints n
      return n;
   }//end of if statement
   return fibonacci(n-1) + fibonacci(n-2);//adding the smaller values using recursion
}//end of fibonacci method