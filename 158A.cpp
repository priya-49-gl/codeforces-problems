#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int scores[50];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int kth_score = scores[k - 1];  // because array is 0-indexed

    int advancers = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= kth_score && scores[i] > 0) {
            advancers++;
        }
    }

    cout << advancers << endl;

    return 0;
}

