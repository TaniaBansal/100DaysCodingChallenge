/*Get an input number from the user and check whether it is a positive or negative number.*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
   
    if(num == 0){
        cout<<"Neither positive nor negative";
    }
    else if(num > 0){
        cout<<"Positive number";
    }
    else{
        cout<<"Negative number";
    }
    return 0;
}