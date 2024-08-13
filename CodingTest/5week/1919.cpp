#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1; string str2;
    cin >> str1;
    cin >> str2;
    // 각 문자열에서 알파벳의 존재 여부를 체크하기 위한 배열
    int check1[26] = { 0 }, check2[26] = { 0 };

    // 각 문자열에서 알파벳의 등장 횟수를 저장하기 위한 배열
    int alpha1[26] = { 0 }, alpha2[26] = { 0 };

    for (int i = 0; i < str1.length(); i++) {
        check1[str1[i] - 'a'] = 1;
        alpha1[str1[i] - 'a'] ++;
    }
    for (int i = 0; i < str2.length(); i++) {
        check2[str2[i] - 'a'] = 1;
        alpha2[str2[i] - 'a'] ++;
    }

    int sum = 0;
    // 알파벳 a부터 z까지 순회하며 두 문자열의 비교
    for (int i = 0; i < 26; i++) {
        // 두 문자열 모두에 해당 알파벳이 존재하는 경우
        if (check1[i] && check2[i]) {
            // 등장 횟수가 다른 경우 차이를 sum에 더함
            if (alpha1[i] != alpha2[i])
                sum += abs(alpha1[i] - alpha2[i]);
        }
        // 한 문자열에만 해당 알파벳이 존재하는 경우
        else
            sum += alpha1[i] + alpha2[i];
    }
    cout << sum;
    return 0;
}
