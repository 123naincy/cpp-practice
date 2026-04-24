#include<iostream>
using namespace std;
int factorial(int n){
int fact=1;
for(int i=1;i<=n;i++){
    fact = fact*i;
}
cout << " factorial of " << n << " is " << fact << endl;
return fact;
}
int bio(int n , int r ){
    int value_1 = factorial(n);
    int value_2 = factorial(r);
    int value_3 = factorial(n-r);
    return value_1/(value_2*value_3);
}
int main(){
cout << bio(5, 2) << endl;
 return 0;

}