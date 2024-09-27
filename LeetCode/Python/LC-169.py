class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        dic = {}

        for n in nums:
            if n not in dic:
                dic[n] = 1
            else:
                dic[n] += 1

        majority = 0

        for n in dic:
            if dic[n] > majority:
                majority = dic[n]
            
        for n in dic:
            if dic[n] == majority:
                return n
        