#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int i = 0;
    int sum = 0;


    while (i <= n) {
        if (i % 2 == 0) {
            sum += i;  
        } else {
            sum -= i; 
        }
        i++;  
    }

    cout << sum; 
    return 0;
}

