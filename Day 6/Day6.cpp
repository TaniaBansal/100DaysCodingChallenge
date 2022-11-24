/*
Get the value of x and y coordinates as input from the user and check in which quadrant the point lies and print it.

Input
10 20
Output
This point lies in first quadrant.

Input
-10 20
Output
This point lies in second quadrant.
*/

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>0 && b>0){
        cout<<"This point lies in first quadrant";
    }
    else if(a<0 && b>0){
        cout<<"This point lies in second quadrant";
    }
    else if(a<0 && b<0){
        cout<<"This point lies in third quadrant";
    }
    else if(a>0 && b<0){
        cout<<"This point lies in fourth quadrant";
    }
    else if(a==0 && b==0){
        cout<<"This point lies on origin";
    }
    return 0;
}