#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S_input;
    cin >> S_input;

    vector<char> S(S_input.begin(), S_input.end());
    long long score = 0;

    size_t i = 0;
    size_t end = S.size();

    while (i < end) {
        char c = S[i];

        if (c == 'V') {
            score += 5;
            i++;
        } else if (c == 'W') {
            score += 2;
            i++;
        } else if (c == 'X') {
            if (i + 1 < end) {

                S[i + 1] = '0';
            }
            i++;
        } else if (c == 'Y') {
            if (i + 1 < end) {
                char nextChar = S[i + 1];
                if (nextChar != '0') {
                    S.push_back(nextChar);
                    S[i + 1] = '0';
                    end++;
                }
            }
            i++;
        } else if (c == 'Z') {
            if (i + 1 < end) {
                char nextChar = S[i + 1];
                if (nextChar == 'V') score /= 5;
                else if (nextChar == 'W') score /= 2;

                if (nextChar == 'V' || nextChar == 'W') S[i + 1] = '0';
            }
            i++;
        } else {

            i++;
        }
    }

    cout << score << endl;
    return 0;
}



