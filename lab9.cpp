//Name: Jose Delgado
//Proj: Lab9
//date: 7-17-2018
#include<iostream>
using namespace std;

int main()
{
    char str[10];//declaring array of size 10
    char ch;//delcaring a charachter
    cout<<"Enter string(at most 10 characters): ";
    cin.getline(str, 10);//entering in the string into the array
    
    cout<<"\nEnter a character: ";
    cin >> ch;//entering a charachter from user
    

    int i; //Hold length of string
    int count=0;//keep count of variable count
    for(i = 0; i<10; i++){
       if(ch == str[i]){
         count++;//incrementing count everytime the charachter is equal to a charachter in the string
       }//end of if statment
    
    };//end of for loop
/*Character 'a' occurs in 'alabama' 4 times.*/
    cout << "Character " << ch << "occurs in " << str << " "<< count << " times";//printing out the results
    return 0;
}
