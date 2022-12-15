/*
Description

Get an input number from user and check whether the given number is an Armstrong number or not.
E.g. Let the number be 1634,
Here 1^4 + 6^4 + 3 ^4 + 4^4 = 1634
Therefore, this is an Armstrong number

Input -> 153
Output -> Armstrong number

Input -> 121
Output -> Not an Armstrong number 
*/


#include<iostream>
#include<math.h>
using namespace std;

int countDigit(int num) {
  return floor(log10(num) + 1);
}

int main(){
    int num, originalNo;
    cin>>num;
    originalNo = num;

    int count = countDigit(num);
    int sum =0;
    while(num>0){
        int rem = num%10;
        sum = sum + pow(rem, count);
        num = num/10;
    }

    if(sum == originalNo){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}