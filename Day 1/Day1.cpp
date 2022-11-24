/*Take an input character from the user and check whether the given input is vowel or consonant.*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch== 'u'){
           cout<<"Vowel";
    }
    else if(!((ch >= 'a' && ch<= 'z') || (ch>= 'A' && ch <= 'Z'))){
        cout<<"Invalid input";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}