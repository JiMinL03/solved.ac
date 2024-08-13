#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int m=0, n=0;
    int sum = 0;
    int min = 0;
    int square_root = 0;
    int count = 0;
    cin >> m;
    cin >> n;
    for (int i = m; i <= n; i++) {
        square_root = sqrt(i);
        if (i == square_root * square_root) {
            count++;
            sum += i;
            if (count == 1) min = i;
        }
    }
    if (count == 0) cout << -1;
    else { cout << sum << endl; cout << min; }
    return 0;
}
