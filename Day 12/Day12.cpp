/*Get a number from user and then find the sum of the digits in the given number.
E.g. let the number = 341
Sum of digits is 3+4+1= 8

Input -> 4521
Output -> 12
*/


#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum=0;
    while(num >0){
        int lastDigit = num%10;
        sum = sum + lastDigit;
        num = num/10;
    }
    cout<<sum<<endl;
    return 0;
}