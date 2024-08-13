#include <iostream>
#include <string>
#include <algorithm>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cin >> n;  // 여러 개의 문자열을 처리하려는 경우 n을 입력 받음
    for (int i = 0; i < n; i++) {  // 여러 번 반복할 수 있도록 for 루프 사용
        string str;
        cin >> str;

        int index = str.find('-');  // '-'의 위치를 찾음

        string eng = str.substr(0, index);  // '-' 앞의 문자들을 추출
        int num = stoi(str.substr(index + 1)); // '-' 뒤의 숫자들을 추출

        int len = eng.length();
        int point = 2;
        int sum = 0;
        for (int i = 0; i < len; i++) {
            //str[i]를 숫자로 바꾸어 26진법을 바꾸어 계산해주어야 한다.
            char c = eng[i];
            sum += (c - 'A') * (int)pow(26,point);
            point--;
        }
        if (abs(sum - num) <= 100) {
            cout << "nice" << endl;
        }
        else
            cout << "not nice" << endl;
    }
    return 0;
}
