/*
Day 29 coding Statement : Write a Program to concatenate a string.

Description -> Get two strings as input from the user and then concatenate it.

Input -> 
Enter first string -> Hello
Enter second string -> Hi
Output -> HelloHi
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str1, str2;
    cout<<"Enter first string ";
    cin>>str1;
    cout<<"Enter second string ";
    cin>>str2;
    // string ans= str1+str2;
    str1.append(str2);
    cout<<str1;
    return 0;
}