 /* 
 * Program Name: Program1.c 
 * Programmer: Jose Delgado
 * Class: CS 3335 
 * HW: 03
 * Problem: 01 
 * */ 


/*NOTE TO USER*****
 *
 *For refrence to value of charachters please use/find the ASCii table 
 *It is where we are able to assign values to characthers.
 *
 * Also when wanting to decrypt subtract your original key by 26 (ex. 26 - 3)
 */
#include<stdio.h>

int main()//begin of main memory
{
   //declarations
   int j,i, shift;
   char str[100], c;

   printf("enter message to be encrypted: ");
   for(i = 0; (c = getchar()) != '\n';i++)//for loop to get characthers until it reads the next line
   {
     str[i]=c;//assigning the array indexes to charachter type under variable c

   }

   printf("enter shift amount: ");
   scanf("%d",&shift);

   for(j<0;j<i;j++)//for loop to go through our messages length
   {

   if(str[j] >= 'a' && str[j] <= 'z')//if a characther is lower case it does this method
   {
        if(str[j] + shift > 'z')//if the charachter + the shift amount are greater than z
        {
          str[j] = ((str[j] + shift)- 'z')+96;//than we add our characther with out shift amount - the largest number in the alphabet (z) + 
                                              //the value of a
        }
        else
        {
          str[j] = str[j] + shift;//however if the characther + shift amount is less than z it just shifts it over

        }
   }

   else if (str[j] >= 'A' &&  str[j] <= 'Z')//however if the charachter is uppercase it does this method
   {
        if(str[j] + shift > 'Z')//if the charachter + the shift amiunt are greater than Z value
        {
           str[j] = ((str[j] + shift) -'Z')+64;//than we add our characther with shift amount subtract value of Z and than add the lowest number
                          		       //which is A (64)
        }
        else
        {
        str[j] = str[j] + shift;//however if the characther + shift amount is less than Z it just shifts it over

        }
    }

        printf("%c",str[j]);//prints the encrypted/decrypted message
  }
        printf("\n");
}//end of main method
