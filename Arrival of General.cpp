#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Find the index of the maximum and minimum heights
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (heights[i] > heights[maxIndex]) {
            maxIndex = i;
        }
        if (heights[i] <= heights[minIndex]) {
            minIndex = i;
        }
    }

    // Calculate the total number of swaps
    int swaps = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        swaps--;  // Adjust if maxIndex is before minIndex
    }

    cout << swaps << endl;
    return 0;
}
