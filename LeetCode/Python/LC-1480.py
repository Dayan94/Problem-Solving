from typing import List

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        
        runningSum = []
        nums_len = len(nums)
        summed_num = 0 
        
        for i in range(nums_len):
            summed_num += nums[i]
            runningSum.append(summed_num)
            
        return runningSum