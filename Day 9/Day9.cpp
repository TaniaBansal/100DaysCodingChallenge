/*
Description
Take an integer as the input from the user and then calculate the number of digits in the given input and print it as the output.

Input
3241

Output
4

Input
6

Output
1
*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count=0;
    if(num == 0){
        count++;
    }
    while(num >0){
        count++;
        num = num/10;
    }

    cout<<count<<endl;
    return 0;
}