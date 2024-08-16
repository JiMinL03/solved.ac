#include <iostream>
using namespace std;

void calculate(int n) {
    int result = 0;
    while (n > 9) {
        result = 0;  // 새로운 자릿수 합을 계산하기 위해 초기화
        while (n) {
            result += n % 10;
            n /= 10;
        }
        n = result;  // result를 n에 넣어 다음 자릿수 합 계산
    }
    cout << n << endl;  // 최종적으로 한 자리 숫자를 출력
}

int main() {
    int n = 0;
    while (1) {
        cin >> n;
        if (n == 0) break;
        else calculate(n);
    }
    return 0;
}
