#include <iostream>
using namespace std;
int sum(int a=1,int b=1){
int sum = a+b;
return sum;
}
int main(){
   int result = sum(2,5);
cout << result;
    return 0;
}