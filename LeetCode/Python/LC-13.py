class Solution:
    def romanToInt(self, s: str) -> int:
        integer = 0
        length_s = len(s)
        i = 0

        while i < length_s:
            if s[i] == 'I':
                if i != length_s - 1:
                    if s[i+1] == 'V':
                        integer += 4
                        i += 2
                        continue
                    if s[i+1] == 'X':
                        integer += 9
                        i += 2
                        continue

                integer += 1

            if s[i] == 'X':
                if i != length_s - 1:
                    if s[i+1] == 'L':
                        integer += 40
                        i += 2
                        continue
                    if s[i+1] == 'C':
                        integer += 90
                        i += 2
                        continue

                integer += 10

            if s[i] == 'C':
                if i != length_s - 1:
                    if s[i+1] == 'D':
                        integer += 400
                        i += 2
                        continue
                    if s[i+1] == 'M':
                        integer += 900
                        i += 2
                        continue

                integer += 100

            if s[i] == 'V':
                integer += 5

            if s[i] == 'L':
                integer += 50

            if s[i] == 'D':
                integer += 500

            if s[i] == 'M':
                integer += 1000
            
            i +=1

        return integer