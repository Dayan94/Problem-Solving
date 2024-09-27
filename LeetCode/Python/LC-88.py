class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """

        nums3 = []
        
        i, j = 0, 0
        while True:
            if not nums1:
                nums3 = nums2[:]
                break
            elif not nums2:
                nums3 = nums1[:]
                break
            elif i < m and j < n:
                if nums1[i] <= nums2[j]:
                    nums3.append(nums1[i])
                    i += 1
                else:
                    nums3.append(nums2[j])
                    j += 1
            elif i < m:
                nums3.append(nums1[i])
                i += 1
            elif j < n:
                nums3.append(nums2[j])
                j += 1
            
            if i == m and j == n:
                break

        nums1[:] = nums3[:]


        