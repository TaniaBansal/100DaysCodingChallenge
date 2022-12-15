/*
Day 30 coding Statement : Write a Program to print Length of the string without using strlen() function

Description -> Get a string as input from user and print the length of the string without using strlen() function.
Input -> Hello
Output -> 5
*/

#include<iostream>
using namespace std;

int main(){
    char str[1000];
    cin>>str;
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
         count++;
    }
    cout<<count;
    return 0;
}