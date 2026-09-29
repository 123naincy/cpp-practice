#include<iostream>
using namespace std;
void changeA(int *ptr){
    *ptr=20;
    cout << *ptr << "/n";
}
int main(){
    int a = 10;
    int &b = a;
    b = 25;
    cout << b << "/n";
     cout << a << "/n";
     return 0;
}
