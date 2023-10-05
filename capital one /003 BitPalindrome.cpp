#include <bits/stdc++.h>
using namespace std;

// Function to convert decimal to binary number and save it in a vector
vector<int> binToVector(unsigned n) {
    vector<int> binary;
    while (n > 0) {
        binary.push_back(n & 1); // Push the least significant bit into the vector
        n >>= 1; // Right-shift to get the next bit
    }
    reverse(binary.begin(), binary.end()); // Reverse the vector to get the binary representation
    return binary;
}

void solve() {
    int n;
    cin >> n;
    vector<int> binary = binToVector(n);
    int l = 0, r = binary.size() - 1;
    int cnt = 0;
    while (l <= r) {
        if (binary[l] == binary[r]) {
            l++; // Move to the next left bit
            r--; // Move to the next right bit
        } else {
            cnt++;
            l++; // Move to the next left bit
            r--; // Move to the next right bit
        }
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--){
    solve();
    }
}
