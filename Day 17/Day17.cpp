/*
Description -> Get an input from the user and find the factors of the number.

Input -> 4
Output -> 1,2,4  
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    int num;
    cin>>num;
    
    
    for(int i=1; i<= num; i++){
        if(num % i == 0){
            ans.push_back(i);
        }
    }

   for(auto i : ans){
       cout<<i<<" ";
   }
    return 0;
}