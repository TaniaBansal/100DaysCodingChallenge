/*
Description
Get a number from user for which you need to fin the factorial, then calculate the factorial and give it as the output.

Input
4

Output
24
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int fact = 1;

    for(int i=2; i<=num; i++){
        fact = fact*i;
    }

    cout<<fact<<endl;
    return 0;
}