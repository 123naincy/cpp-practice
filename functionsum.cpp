#include <iostream>
using namespace std;
int sum(int n){
    int sum = 0, lastdigit;
    while(n > 0){
        lastdigit = n % 10;
        sum += lastdigit;
        n /= 10;
    }
    return sum;
}
int main(){
    int n = 12345;
    cout << sum(n);
    return 0;
}
