#include <iostream>
using namespace std;
int Fib(int i){
    int value = 0;
    if (i < 1) return 0;
    if (i == 1) return 1;
    return Fib(i-1) + Fib(i+2);
}
int main(){
    cout << Fib(1) << endl;
}