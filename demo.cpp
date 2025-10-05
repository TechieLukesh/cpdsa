class Solution {
public:
    typedef long long ll;
    int n, totalDigSum, M = 1e9 + 7;
    long long totalPssiblePermt = 0;
    int findPow(ll a, ll b) {
        if(b == 0) {
            return 1;
        }

        ll half = findPow(a, b/2);
        ll result = (half * half) % M;
        if(b % 2 == 1) {
            result = (result * a) % M;
        }

        return result;
    }

    int solve(int digit, int evenIdxDigCnt, int currSum, 
            vector<int>& freq, vector<ll>& fermatFact, 
            vector<vector<vector<int>>> &t) {
        if(digit == 10) {
            if(currSum == totalDigSum/2 && evenIdxDigCnt == (n+1)/2) {
                return totalPssiblePermt;
            }
            return 0;
        }

        if(t[digit][evenIdxDigCnt][currSum] != -1) {
            return t[digit][evenIdxDigCnt][currSum];
        }
        ll ways = 0;

        for(int count = 0; count <= min(freq[digit], (n+1)/2 - evenIdxDigCnt); count++) {
            int evenPosCount = count;
            int oddPosCount  = freq[digit] - count;

            ll div = (fermatFact[evenPosCount] * fermatFact[oddPosCount])% M;

            ll val = solve(digit+1, evenIdxDigCnt + evenPosCount, currSum + digit*count, freq, fermatFact, t);

            ways = (ways + (val * div) % M) % M;
        }

        return t[digit][evenIdxDigCnt][currSum] = ways;
    }

    int countBalancedPermutations(string num) {
        n   = num.length();
        totalDigSum = 0;

        vector<int> freq(10, 0);
        for(int i = 0; i < n; i++) {
            totalDigSum += num[i] - '0';
            freq[num[i] - '0']++;
        }

        if(totalDigSum % 2 != 0) {
            return 0;
        }

        vector<long long> fact(n+1, 1);
        fact[0] = 1;
        fact[1] = 1;
        for(int i = 2; i <= n; i++) {
            fact[i] = (fact[i-1] * i) % M;
        }

        vector<long long> fermatFact(n+1, 1);
        for(int i = 0; i <= n; i++) {
            fermatFact[i] = findPow(fact[i], M-2) % M;
        }

        totalPssiblePermt = (1LL * fact[(n+1)/2] * fact[n/2]) % M;

        int digit = 0;
        int evenIndexDigitsCount = 0;
        int currSum = 0;
        vector<vector<vector<int>>> t(10, vector<vector<int>>((n + 1) / 2 + 1, vector<int>(totalDigitSum + 1, -1)));
        return solve(digit, evenIndexDigitsCount, currSum, freq, fermatFact, t);

    }
};
