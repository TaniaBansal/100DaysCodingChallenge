/*
Get a string as the input from the user and then remove all the vowel letters from the string and give the output.

Input -> remove
Output -> rmv
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    string ch;
    vector<char> ans;
    cin>>ch;
    int n = ch.length();

   int i=0;
    while(i<n){
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
              i++;
        }
        else{
            ans.push_back(ch[i]);
            i++;
        }
    }

    for(auto j:ans){
        cout<<j;
    }
    return 0;
}