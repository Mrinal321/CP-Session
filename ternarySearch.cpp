#include <bits/stdc++.h>
using namespace std;

vector<int> A = {1, 3, 7, 9, 8, 5, 2}; 

int ternarySearchPeak(int low, int high, vector < int >& A) {
    while (high - low > 2) { 
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;

        if (A[mid1] < A[mid2])  // Move towards the larger value
            low = mid1;
        else
            high = mid2;
    }

    int peak = low;
    for (int i = low; i <= high; i++) {
        if (A[i] > A[peak]) peak = i;
    }

    return peak; 
}

int main() {
    vector<int> A = {1, 3, 7, 9, 8, 5, 2}; 
    int peakIndex = ternarySearchPeak(0, A.size() - 1, A);
    cout << "Peak Element: " << A[peakIndex] << " at index " << peakIndex << endl;
}
