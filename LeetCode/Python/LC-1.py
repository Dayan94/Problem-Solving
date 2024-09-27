class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        length_nums = len(nums)

        for i in range(length_nums - 1):
            for j in range(i + 1, length_nums):
                    
                two_sum = nums[i] + nums[j]
                
                if two_sum == target:
                    return [i, j]

        # length_nums = len(nums)

        # for i in range(length_nums):
        #     for j in range(length_nums):
        #         if i == j:
        #             continue
                    
        #         two_sum = nums[i] + nums[j]
        #         if two_sum == target:
        #             return [i, j]