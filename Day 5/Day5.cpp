/*
Get a number as input from the user and check whether the given number is odd or even

Input
10
Output
Even

Input
5
Output
Odd

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2 ==0){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
    return 0;
}