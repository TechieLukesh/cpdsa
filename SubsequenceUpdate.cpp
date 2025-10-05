#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> arr(n);
        
        
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        ll rangeLength = r - l + 1;
        
        // ensure that r does not exceed the array size
        r = min(r, n);
        // ensure that l is at least 1
        l = max(l, 1LL);
        ll start = l - 1;
        
        // adjust rangeLength if it exceeds possible elements
        rangeLength = min(rangeLength, r);
        rangeLength = min(rangeLength, n - start);
        
        vector<ll> leftPart, rightPart;
 
        // collect elements for the left range (first r elements)
        for (ll i = 0; i < r; i++) {
            leftPart.push_back(arr[i]);
        }
 
        // collect elements for the right range (from l-1 to end)
        for (ll i = start; i < n; i++) {
            rightPart.push_back(arr[i]);
        }
 
        // sort both parts
        sort(leftPart.begin(), leftPart.end());
        sort(rightPart.begin(), rightPart.end());
 
        // calculate sums for the smallest elements in the range
        ll leftSum = 0, rightSum = 0;
        for (ll i = 0; i < rangeLength; i++) {
            if (i < leftPart.size()) {
                leftSum += leftPart[i];
            }
            if (i < rightPart.size()) {
                rightSum += rightPart[i];
            }
        }
 
        // output the minimum of the two sums
        cout << min(leftSum, rightSum) << "\n";
    }
 
    return 0;
}