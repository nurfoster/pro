#include <iostream>
 
    using namespace std;
 
int f(int n) {
    int a, b, sum, count;
    a = count = sum = 0;
    b = 1;
    while (count < n) {
        sum = a + b;
        a = b;
        b = sum;
        count++;
    }
    return a;
}
 
int main() {
    int n;
    cin >> n;
    cout << f(n) << "\n";
    return 0;
}