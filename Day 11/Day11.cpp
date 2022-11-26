/*Description

Fibonacci series is a special series where nth term is the sum of previous two terms in the series. The series starts with 0 and 1 as the first and second term of the series respectively.
Here you need to get the value for nth term from user and then print Fibonacci series containing n terms.

Input -> 5
Output -> 0,1,1,2,3

Input -> 8
Output -> 0,1,1,2,3,5,8,13
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a=0, b= 1;

    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        int c = a+b;
        a = b;
        b = c;
    }

    return 0;
}