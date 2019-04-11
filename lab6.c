// Name: Jose Delgado
// Date: 6 - 3 - 18
// Proj: Lab6

#include<stdio.h>
#include<stdlib.h>
int main()
   {
   //declarations
   int count,size,i,counter =0;
   float temp,average = 0;
   scanf("%d",&size);

   //if statement if the size is larger than 100 the program is terminated
   if(size<=100)
   {
   int arr[size];
   for(count = 0; count<size;count++)//for loop to add integers to the list
   {
      scanf("%d",&arr[count]);
   }
   
   for(i = 0;i <sizeof(arr)/sizeof(arr[0]);i++)//for loop changing the integers into float type
   {
      temp += (float)(arr[i]);  
   }
 
   average = temp/(float)(size);
   printf("Total integers in the array \t:%d\n",size);
   printf("Average of all array integers \t:%f\n",average);
   
   
   for(i = 0;i <sizeof(arr)/sizeof(arr[0]);i++)//for loop to count how many numbers are under the average
   {
      if(arr[i] > average){
      }
      else{
         counter++;
      }
   }
   
   printf("Count of grades below average \t:%d",counter);
   }
   else
   {
   exit(0);
   }
}
