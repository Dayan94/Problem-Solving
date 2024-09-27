class Solution:
    def printVertically(self, s: str) -> List[str]:
        words = s.split()

        vertical_words = []
        vertical_word = ""
        max_word_length = len(max(words, key = len))
        total_words = len(words)

        words_lengths = {}

        for i in range(total_words):
            words_lengths[i] = len(words[i])

        for i in range(max_word_length):
            vertical_word = ""
            for j in range(total_words):
                if i >= words_lengths[j]:
                    vertical_word += " "
                else:
                    vertical_word += words[j][i]
            
            vertical_words.append(vertical_word.rstrip())

        return vertical_words