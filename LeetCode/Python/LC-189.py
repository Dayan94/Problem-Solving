class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        nums_length = len(nums)
        k = k % nums_length
        modified_nums = nums[-k:] + nums[: nums_length - k]
        
        for i in range(nums_length):
            nums[i] = modified_nums[i]
        nums