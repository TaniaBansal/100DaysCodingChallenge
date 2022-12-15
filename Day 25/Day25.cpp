/*
Description -> Get the value for radius from the user and calculate the area of the circle for the given radius.
Area of circle = 3.14*radius*radius

Input -> 3
Output -> 28.26
*/

#include<iostream>
using namespace std;

int main(){
    int radius;
    cin>>radius;
    float area;
    area = 3.14 * radius * radius;
    cout<<area;
    return 0;
}