#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) return mid;  // Found target
        else if (arr[mid] < target) low = mid + 1;  // Go right
        else high = mid - 1;  // Go left
    }
    
    return -1;  // Not found
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};  
    int target = 5;
    
    int index = binarySearch(arr, target);
    if (index != -1) cout << "Found at index: " << index << endl;
    else cout << "Not found" << endl;

    return 0;
}
