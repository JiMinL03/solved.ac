#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    int n=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string num="";
        cin >> num;
        int size = num.length();

        int number = atoi(num.c_str());
        double result = pow(number, 2.0);
        string p = to_string(static_cast<int>(result));

        if (num == p.substr(p.size() - size)) {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    return 0;
}
