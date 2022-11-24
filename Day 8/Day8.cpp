/*
Description

Get the values of a, b and c (coefficients of quadratic equation) as input from the user and calculate the roots and print as the output.
Input
Enter the value of a, b and c : 1 -6 9

Output
Roots are equal
Root 1= root 2 = 3.00
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    float D = ((b*b) - (4*a*c));
    float root1 = (-b + sqrt(b*b - 4*a*c))/2*a;
    float root2 = (-b - sqrt(b*b - 4*a*c))/2*a;
    if(D > 0){
        cout<<"Real and unequal roots"<<" "<<root1<<" "<<root2;
    }
    else if(D== 0){
        cout<<"Real and equal roots "<<"root1 = root2 = "<<root1;
    }
    else if(D<0){
        cout<<"No real roots "<<root1<<" "<<root2;
    }
    return 0;
}