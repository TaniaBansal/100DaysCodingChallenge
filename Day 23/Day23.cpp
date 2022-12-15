/*
Description -> Get a number as input from the user and find the zeros present in that number. Then convert the zeros into one and then print it.

Input ->310020
Output -> 311121
*/

#include<iostream>
using namespace std;

void reverse(int n){
    int sumNo = 0;
   while(n>0){
    int rem = n%10;
    sumNo = sumNo*10 + rem;
    n = n/10;
   }
   cout<<sumNo;
}

int main(){
    int num;
    cin>>num;
    int sum =0;
    while(num >0){
        int rem = num%10;
        if(rem == 0){
          sum = sum*10 + 1;
        }
        else{
            sum = sum*10 + rem;
        }

        num = num/10;
    }
    reverse(sum);
    return 0;
}