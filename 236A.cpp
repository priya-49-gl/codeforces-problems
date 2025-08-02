#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int scores[50]; // ok, max size 50
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int kth_score = scores[k - 1];  // 0-based index: correct

    int advancers = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= kth_score && scores[i] > 0) {
            advancers++;
        }
    }

    cout << advancers << endl;
    return 0;
}
