/*Get the number of month and year as input from the user and check the number of days present in that month.

Input
Enter month : 2
Enter year : 2000

Output
29
*/

#include<iostream>
using namespace std;

int main(){
    int month , year;
    cin>>month>>year;

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"31";
        break;

        case 2:
        if(((year %4 == 0) && (year % 100 != 0)) || (year%400 == 0)){
            cout<<"29";
            break;
        }
        else{
           cout<<"28";
           break;
        }
        

        case 4:
        case 6:
        case 9:
        case 11:
        cout<<"30";
        break;

        default:
        cout<<"Invalid";
        
    }
    return 0;
}