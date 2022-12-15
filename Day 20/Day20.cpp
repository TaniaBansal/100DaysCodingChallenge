/*
Description
Get a number as input from the user and check whether that number is prime or not.
A prime number is a number with factors as 1 and that number itself.

Input -> 1
Output -> 1 is not a prime number

Input -> 5
Output -> 5 is a prime number  
*/


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    bool flag = 0;
    for(int i=2; i<=sqrt(num); i++){
        if(num %i == 0){
            cout<<"Not a prime number";
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout<<"Prime Number";
    }
    return 0;
}