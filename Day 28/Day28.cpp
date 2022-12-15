/*
Day 28 coding Statement : Write a Program to reverse a string.

Description -> Get an input string from user and print it in reverse order.

Input -> Hello
Output -> olleH
*/

#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.length();
    for(int i= n; i>=0; i--){
        cout<<str[i];
    }
    return 0;
}