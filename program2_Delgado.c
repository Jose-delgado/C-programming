 /* 
 * Program Name: Program2.c 
 * Programmer: Jose Delgado
 * Class: CS 3335 
 * HW: 03
 * Problem: 02 
 * */ 


#include <stdio.h>
#include <stdbool.h> /* C99 only */
#include<stdlib.h>//in order to include exit(0) to terminate the program 
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;
    
  //declaring methods in a macro like style
  void make_empty(void);
  bool is_empty(void);
  bool is_full(void);
  void push(char i);
  char pop(void);
  void stack_overflow();
  void stack_underflow();


int main()//begin of main method
{
    //declartaions
    char input;
    bool nested = true;

    printf("Enter parentheses and/or braces: ");
    while ((input = getchar()) != '\n')//while loop to get the characthers aslong as it doesnt go to a next line
    {
        if (input == '(' || input == '{')//if statement if it begins with a parathesis or brace it pushes it
        {
            push(input);
        }
        else if (input == ')' && pop() != '(')//else if the input isnt a ) and it doesnt pop a ( it means nested is false
        {
            nested = false;
        }
        else if (input == '}' && pop() != '{')//else if the input isnt a } and it doesnt pop a { it means nested is false
        {
            nested = false;
        }
    }

    if (is_empty() == false)//if the method is false that means it is not nested
    { 
	nested = false;
     }

    if (nested == true)//if nested is true that means it is nested properly
    {
      printf("Parentheses/braces are nested properly\n");
    }
    else//however if not nested properly it will display so
    {
      printf("Parentheses/braces are not nested properly\n");
    } 

    return 0;
}//end of main

    void make_empty(void)//method that sets the top to 0
    {
       top = 0;
    }   

    bool is_empty(void)//method to check if it is empty or not
    { 
      return top == 0;
    }

    bool is_full(void)//method to check if it is full or not
    {
       return top == STACK_SIZE;
    }

    void push(char i)//method to push charachters into it
    {
       if (is_full())
          stack_overflow();
       else
          contents[top++] = i;
    }

    char pop(void)//method to pop charachters out of it
    {
       if (is_empty())
          stack_underflow();
       else
          return contents[--top];
    }

    void stack_overflow()//method to identify if there is a stack over flow
    {
       printf("STACK OVERFLOW\n");
       exit(0);
    }

    void stack_underflow()//method to identify there is an underflow
    {
       printf("Too many right parentheses/braces\n\n");
       exit(0);
    }
