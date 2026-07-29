class Solution {
public:
    const long long LIM = 1000000LL;

    long long comb(int n, int r) {
        if (r < 0 || r > n) return 0;
        r = min(r, n - r);

        long long ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (n - r + i) / i;
            if (ans > LIM) return LIM;
        }

        return ans;
    }

    long long countWays(vector<int>& cnt) {

        int total = 0;

        for (int x : cnt)
            total += x;

        long long ways = 1;

        int rem = total;

        for (int x : cnt) {
            if (x == 0) continue;

            ways *= comb(rem, x);

            if (ways > LIM)
                ways = LIM;

            rem -= x;
        }

        return ways;
    }

    string smallestPalindrome(string s, int k) {

        vector<int> half(26, 0);

        string mid = "";

        for (char c : s)
            half[c - 'a']++;

        for (int i = 0; i < 26; i++) {

            if (half[i] % 2)
                mid = char('a' + i);

            half[i] /= 2;
        }

        if (countWays(half) < k)
            return "";

        string left = "";

        int len = 0;

        for (int x : half)
            len += x;

        while (len) {

            for (int c = 0; c < 26; c++) {

                if (half[c] == 0)
                    continue;

                half[c]--;

                long long ways = countWays(half);

                if (ways >= k) {
                    left += char('a' + c);
                    len--;
                    break;
                }

                k -= ways;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
