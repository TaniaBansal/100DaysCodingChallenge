/*Get an input character from the user and the give the ASCII value of the given input as the output.
Input
b
Output
98
Input
B
Output
66
*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    cout<<"ASCII value of character is : "<<(int)ch;
    return 0;
}