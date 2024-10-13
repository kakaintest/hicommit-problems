#include <iostream>
#include <vector>
using namespace std;

long long sumOfPrimeDivisors(int N) {
    long long sum = 0;
    vector<bool> isPrime(N + 1, true);
    
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            if (N % i == 0) {
                sum += i;
            }

            for (int j = 2 * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return sum;
}

int main() {
    int N;
    cin >> N; 
    cout << sumOfPrimeDivisors(N) << endl; 
    return 0;
}
