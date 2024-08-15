#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    double result = pow(0.5, n);
    printf("%.*f", n, result);
    return 0;
}
