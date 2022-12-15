/*
Day 27 coding Statement : Write a program to find the double of the given number without using arithmetic operator

Description
For the given input number calculate the double of it without using arithmetic operator.

Input -> 4
Output -> 8
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = n<<1;
    cout<<ans;
    return 0;
}