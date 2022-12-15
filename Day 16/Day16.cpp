/*
Description
Get the input from the user and check whether that number is a perfect number or not.
E.g. Let number is 28, factors of 28 are 1,2,4,7,14. Now the sum of all these factors are 28 itself.

Input -> 28
Output -> Perfect Number

Input ->4
Output -> Not a perfect number 
*/


#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum =0;
    
    for(int i=1; i<= num/2; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }

    if(sum == num){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a perfect number";
    }
    return 0;
}