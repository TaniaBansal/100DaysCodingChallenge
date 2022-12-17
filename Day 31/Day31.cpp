/*
Description
Get an input string from user and then convert the lower case of alphabets to upper case and all upper-case alphabets into lower case.

Input -> Hello
Output -> hELLO
*/

#include<iostream>
using namespace std;

int main(){
    string ch;
    cin>>ch;
    int n = ch.length();

    for(int i=0; i<n; i++){
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
             ch[i] = ch[i] + 32;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            ch[i] = ch[i] - 32;
        }
    }
    cout<<ch;
    return 0;
}