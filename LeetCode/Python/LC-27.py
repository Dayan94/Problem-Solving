class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        
        # Solution 1
        while val in nums:
            nums.remove(val)

        return len(nums)

        # Solution 2
        # for n in nums[:]:
        #     if n == val:
        #         nums.remove(n)

        # return len(nums)
        