#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    int range = sqrt(num);
    if (num % 2 == 0 || num % 3 == 0) 
        return false;

    for (int i = 5; i <= range; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        int n, mila = 0;
        cin >> n;
        int givenArray[n];
        for (int i = 0; i < n; i++) {
            cin >> givenArray[i];
        }
        
        for (int j = 0; j < n && mila == 0; j++) {
            for (int k = j + 1; k < n; k++) {
                int num = givenArray[j] + givenArray[k];
                if (!isPrime(num)) {
                    cout << j + 1 << " " << k + 1 << "\n";
                    mila = 1;
                    break;
                }
            }
        }
        if (mila == 0) {
            cout << -1 << "\n";
        }
    }
    return 0;
}
