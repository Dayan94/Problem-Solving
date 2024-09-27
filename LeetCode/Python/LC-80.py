class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        new_nums = [nums[0]]
        second_insertion = False

        for i in range(1, len(nums)):
            if nums[i] == new_nums[-1]:
                if second_insertion == False:
                    new_nums.append(nums[i])
                    second_insertion = True
            else:
                new_nums.append(nums[i])
                second_insertion = False
                
                
            
        nums[:] = new_nums[:len(new_nums)]

        return len(nums)
        