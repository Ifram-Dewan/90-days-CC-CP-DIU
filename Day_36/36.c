#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> roundNumbers;
        int divisor = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                roundNumbers.push_back(digit * divisor);
            }
            n /= 10;
            divisor *= 10;
        }

        cout << roundNumbers.size() << endl;
        for (int i = 0; i < roundNumbers.size(); ++i) {
            cout << roundNumbers[i];
            if (i < roundNumbers.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

