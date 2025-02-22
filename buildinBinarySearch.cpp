#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 4, 6, 8};
    if (binary_search(v.begin(), v.end(), 4))
        cout << "Found 4" << endl;
    else
        cout << "Not Found" << endl;
}
