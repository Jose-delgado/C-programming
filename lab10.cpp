//Name: Jose Delgado
//Proj: Lab10
//Date: 7_18_2018
#include<iostream>
using namespace std;
const int MAX = 50;//declaring a constant size of type int

struct books//creating a struct creating type book
{
 char name[20];//creating two strings of trype book
 char author[20];
};



int main()//begin of main method
{
 int num,i;//declarations
 books a[MAX];

 cout << "No Of Books[less than 50]: ";//prompting user for number of books
 cin  >> num;

 cout << "Enter the book details \n" << "----------------------\n"; 
 
 for(i = 1;i<=num;i++)//for loop to get the book name and author name from the user for how many times there are of books
 {
  cout << "Details of Book No " << i;
  cout << "\nBook Name: ";
  cin  >> a[i].name; 
 
  cout << "Book Author: " <<a[i].author;
  cin >> a[i].author;
 
 } 
 
 cout << "=======================================================" << endl;
 cout << "S.No |\t" << "Book Name |" << "author" <<"\n=======================================================" << endl;
 for(i = 1;i<=num;i++)//for loop to print out the results
 {
 cout << i <<"|\t" << a[i].name << "|\t" << a[i].author <<endl;
 }
 cout << "=======================================================" << endl;
return 0;
}//end of maint method



