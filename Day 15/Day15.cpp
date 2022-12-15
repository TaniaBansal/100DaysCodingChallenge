/*
Description
Get a number as input from user and then check whether that number is a strong number or not. A number is said to be strong number if the sum of the factorial of each digit in the number is same as that of the number.

E.g. let the number be 145
Here 1! + 4! + 5! is 1 + 24 + 120 which is equal to 145 itself.

Input -> 121
Output -> Not a strong number

Input -> 2
Output -> Strong number
*/


#include<iostream>
using namespace std;

int factorial(int num){
    int fac = 1;
    for(int i=2; i<=num; i++){
        fac = fac*i;
    }
    return fac;
}

int main(){
    int n;
    cin>>n;
    int originalNo = n;
    int sum =0;
    
    while(n>0){
        int lastDigit = n%10;
        int fact = factorial(lastDigit);
        sum = sum + fact;
        n = n/10;
    }
       
    if(sum == originalNo){
        cout<<"Strong Number";
    }
    else{
        cout<<"Not a strong number";
    }
    return 0;
}


