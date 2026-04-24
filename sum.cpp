#include<iostream>
using namespace std;
int sum(int n){
    int res = 0;
    while(n>0){
        int temp = n%10;
        res = res + temp;
        n = n/10;
     }
     return res;
}
int main(){
    int n = 123;
    cout << sum(n);
}