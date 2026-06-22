class Solution:
    def topKFrequent(self, nums, k):
        from collections import Counter

        freq = Counter(nums)
        return [num for num, count in freq.most_common(k)]
    