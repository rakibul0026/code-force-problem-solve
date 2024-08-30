#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int missing = 6 - (a + b);

    cout << missing << endl;

    return 0;
}

