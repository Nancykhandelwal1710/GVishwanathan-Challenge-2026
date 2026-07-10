class Solution(object):
    def findAnagrams(self, s, p):

        if len(p) > len(s):
            return []

        from collections import Counter

        pCount = Counter(p)
        window = Counter(s[:len(p)])

        ans = []

        if window == pCount:
            ans.append(0)

        for i in range(len(p), len(s)):

            window[s[i]] += 1
            window[s[i - len(p)]] -= 1

            if window[s[i - len(p)]] == 0:
                del window[s[i - len(p)]]

            if window == pCount:
                ans.append(i - len(p) + 1)

        return ans
        