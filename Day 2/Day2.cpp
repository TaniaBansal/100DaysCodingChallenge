/*Description: Take an input character from user and check whether it is an alphabet or not.
Input : A
Output:  Alphabet

Input: 7
Output: Not an alphabet
*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if((ch >= 'a' && ch<= 'z') || (ch>= 'A' && ch<='Z')){
        cout<<"Alphabet";
    }
    else{
        cout<<"Not an alphabet";
    }
    return 0;
}