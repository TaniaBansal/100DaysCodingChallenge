/*
Get an input from the user and the print the reverse of the given number as the output
E.g. let the number be 324 then the reverse of the number is 423

Input -> 675
Output -> 576
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum =0;
    while (num>0)
    {
        int lastDigit = num%10;
        sum = sum*10 + lastDigit;
        num = num/10;
    }
    cout<<sum<<endl;
    return 0;
    
}