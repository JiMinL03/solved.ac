#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    int num=0;
    int i = 0;
    while(n--) {
        cin >> num;
        for ( i = 2; i < num; i++) {
            if (num % i == 0) break;
        }
        if (i == num) count++;
    }
    cout << count;
    return 0;
}
