class Solution:
    def reverse(self, x: int) -> int:

        reverse_int = 0
        negative_num = False

        if x < 0:
            x = -x
            negative_num = True

        while x != 0:
            remainder = x % 10
            reverse_int = 10  * reverse_int + remainder
            x = x // 10

        if negative_num == True:
            if reverse_int > 2147483648:
                return 0
            return -reverse_int
        
        if reverse_int > 2147483647:
            return 0

        return reverse_int