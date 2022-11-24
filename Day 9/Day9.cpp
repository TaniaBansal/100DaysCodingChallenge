#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count=0;
    if(num == 0){
        count++;
    }
    while(num >0){
        count++;
        num = num/10;
    }

    cout<<count<<endl;
}