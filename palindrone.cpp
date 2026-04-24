#include<iostream>
using namespace std;
int main(){
   int n = 129;
   int org=n;
   int rev = 0;
    while(n>0){
    int temp= n%10;
    rev = rev*10 + temp;
    n = n/10;
    };
    if(org == rev){
        cout << "palindrone";
    }
    else {
        cout << "not a palindrone";
    }
}