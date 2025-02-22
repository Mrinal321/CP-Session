#include <bits/stdc++.h>
using namespace std;

int Sqrt(int n) {
    int low = 0, high = n, mid, ans = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (mid * mid <= n) {
            ans = mid;  // Store the best answer
            low = mid + 1;  // Search for a larger square root
        } else {
            high = mid - 1;  // Search in the lower range
        }
    }
    return ans;
}

int main() {
    int num = 40;
    cout << "Square-root: " << Sqrt(num);

    return 0;
}