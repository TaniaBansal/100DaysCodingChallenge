/*
Description
Get a number as input from the user and check whether that number is a Palindrome or not.

Input -> 121
Output -> Palindrome

Input -> 34
Output -> Not a Palindrome
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int originalNo = num;

   int sum =0;
    while(num>0){
        int rem = num%10;
        sum = sum *10 + rem;
        num = num/10;
    }

    if(originalNo == sum){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}