class Solution:
    def isValid(self, s: str) -> bool:
        # Solution 1
        valid_brackets = {'(': ')', '{': '}', '[': ']'}
        stack = []

        # Solution 1
        for char in s:
            if char in valid_brackets:
                stack.append(char)
            elif not stack or char != valid_brackets[stack.pop()]:
                    return False
        
        return not stack



        # Solution 2
        # brackets_stack = [0]
        # s_length = len(s)
        # for i in range(s_length):
        #     if s[i] == "(" or s[i] == "{" or s[i] == "[":
        #         brackets_stack.append(s[i])
        #     elif s[i] == ")":
        #         if brackets_stack[-1] == "(":
        #             brackets_stack.pop()
        #         else:
        #             return False
        #     elif s[i] == "}":
        #         if brackets_stack[-1] == "{":
        #             brackets_stack.pop()
        #         else:
        #             return False
        #     elif s[i] == "]":
        #         if brackets_stack[-1] == "[":
        #             brackets_stack.pop()
        #         else:
        #             return False

        # if brackets_stack == [0]:
        #     return True
        # else:
        #     return False