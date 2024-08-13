#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if(a == 100) a /= 0;
    cout << a + b + 1;
    
    return 0;
}