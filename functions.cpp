#include <iostream>

using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;

    for (int i = 2; i < x; ++i) {
        if (x % i == 0) return false;
    }

    return true;
}

int nextPrime(int x) {
    while(1) {
        x += 1;
        if (isPrime(x)) return x;
    }
}