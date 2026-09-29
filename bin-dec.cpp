#include <iostream>
using namespace std;
void BinToDec(int n) {
    int dec = 0, base = 1;
    while (n > 0) {
        int last_digit = n % 10;
        dec += last_digit * base;
        base *= 2;
        n /= 10;
    }
    cout << dec << endl;
}

int main() {
    BinToDec(101);
    return 0;
}