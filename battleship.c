 /* 
 * Program Name: battleship.c 
 * Programmer: Jose Delgado
 * Class: CS 3335 
 * HW: 04
 * */ 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//declaring these methods in a macro like style
void setBoard();
void setComputerBoard();


int main()//main method to call the first method
{
  setBoard();
}

void setBoard()//this method sets the players board
{
  char arr[10];
  
  int i,p1,p2;
  for(i =0;i<10;i++)//for loop to create the *'s on the board
  {
  arr[i] = '*';
  }
  
  printf("Enter 1st position: ");//asking the user to place the ships in a certain position
  scanf("%d",&p1);
  arr[p1] = 'S';  
  
  printf("\nEnter 2nd position: ");//asking the user to place the ships in a certain poistion
  scanf("%d",&p2);
  arr[p2] = 'S';
 
  setComputerBoard(arr,p1,p2);//calling the next method while passing in the array and positions of the players ships
}//end of setBoard method

void setComputerBoard(char rr[],int p1,int p2)//method to set board for the computer while accepting in arguments
{
 char  b [10];
 int i,g1,j,g2; 
 
 for(i = 0; i < 10; i++){//for loop to set the *'s on the enemy board
 b[i] = '*';
 }

 srand(time(NULL));//in order to get a random number
 g1 = rand()%10;//doing this allows us to get a random number between 0-9
 g2 = rand()%10;

 if(g2 == g1){//if guess2 is the same as guess1 it will take another guess
   g2 = rand()%10;
 }
 printf("\n");
 b[g1] = 'S';//setting the enemies ships to their positions
 b[g2] = 'S';
 
 
/* for(j = 0;j<10;j++)//for loop to print out the enemy board
 {
 printf("%c%",b[j]);
 }
*/
  playGame(rr,&b,g1,g2,p1,p2);//calling the playGame method while passing both arrays and all positions of all the ships
}//done with setComputerBoard method

 int playGame(char ar[], char *c,int g1,int g2,int p1,int p2)
 {

 int p;

 printf("\n\n");

 int guess,f,pl;

 srand(time(NULL));//in order to pick a random number
 guess = rand()%10;//this allows for a number to be chosen from 0-9

 if(*(ar+guess) == 'M' || *(ar+guess) == 'H')
 {
  playGame(ar, c, g1, g2, p1, p2); 
 }
 
 printf("\nComputer guesses %d\n",guess);
 
 if(*(ar+guess) == 'S')//if computers guess is a hit it prints HIT! and replaces the S with a H
 {
 printf("HIT!\n");
 *(ar+guess) = 'H';   
 }
 else
 {
 printf("MISS!\n");//If the computer guess is wrong it prints MISS! and replaces the * with a M
 *(ar+guess) = 'M';
 }

 printf("\nhuman Board: \n"); 
 printf("0123456789\n");
 for(f=0;f<10;f++)//for loop to print the human board
 {
  printf("%c",*(ar+f));
 }
 
 printf("\n\n\nComputer Board: \n");
 
 printf("0123456789\n");
 for(p =0;p<10;p++)//for loop to print out the computers board
 {
 printf("%c", *(c+p));
 }

 if(*(ar+p1) == 'H' && *(ar+p2) == 'H')//if all the S's are replaced with H's than it prints out the computer wins and terminates the program
 {
 printf("\nComputer wins!");
 exit(0);
 return 0;
 }

 printf("\nEnter guesss: ");//prompts the user for a guess to attack the enemy
 scanf("%d",&pl);
 printf("\n You guessed: %d",pl);

 if(*(c+pl) == 'S')//if the users guess is a ship than it prints HIT! and replaces S with a H
 {
  printf("\nHIT!\n");
  *(c+pl) = 'H';
 }
 else
 {
  printf("\nMISS!\n");//if the users guess is wrong it prints MISS! and replaces * with a M
  *(c+pl) = 'M';
 }
 printf("\n");
  
 printf("\nhuman Board: \n");
 printf("0123456789\n");
 for(f=0;f<10;f++)//for loop to print out the players baord
 {
 printf("%c",*(ar+f));
 }
 
 printf("\n");

 printf("\nComputer Board: \n");
 printf("0123456789\n");
 for(p =0;p<10;p++)//for loop to print out the computers board
 {
  printf("%c", *(c+p));
 }

 printf("\n\n");

 if(*(c+g1) == 'H' && *(c+g2) == 'H')//if statement to check if the player wins
 {
 printf("Player wins!");
 exit(0);
 return 1;
 }

  playGame(ar, c, g1, g2, p1, p2);//this calls back the playGame method because if it reaches to this point it means the game isnt over

}//end of playGame method 
