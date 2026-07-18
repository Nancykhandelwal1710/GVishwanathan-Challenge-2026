from bisect import bisect_left

class Solution(object):
    def countSmaller(self, nums):

        arr = []
        ans = []

        for num in nums[::-1]:
            idx = bisect_left(arr, num)
            ans.append(idx)
            arr.insert(idx, num)

        return ans[::-1]
    