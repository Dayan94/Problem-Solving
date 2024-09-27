class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        min_word_len = len(min(strs, key = len))
        total_words = len(strs)
        common_prefix = ""

        if total_words == 1:
            common_prefix = strs[0]
        else:
            for i in range(min_word_len):
                for j in range(total_words - 1):
                    if strs[j][i] != strs[j+1][i]:
                        break
                if j == (total_words - 2) and strs[j][i] == strs[j+1][i]:
                    common_prefix += strs[j][i]
                else:
                    break
            
        return common_prefix