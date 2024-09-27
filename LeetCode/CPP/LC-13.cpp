class Solution {
public:
    int romanToInt(string s) {
        int str_length = s.length(), int_number = 0;
        
        for(int index = 0; index < str_length; index++)
        {
            if(s[index] == 'M') {
                int_number += 1000;
            }
            else if(s[index] == 'D') {
                int_number += 500;
            }
            else if(s[index] == 'C') {
                if(index != (str_length - 1) && (s[index+1] == 'D' or s[index+1] == 'M')) {
                int_number -= 100;
            }
                else {
                    int_number += 100;
                }
            }
            else if(s[index] == 'L') {
                int_number += 50;
            }
            else if(s[index] == 'X') {
                if (index != (str_length-1) and (s[index+1] == 'L' or s[index+1] == 'C')) {
                    int_number -= 10;
                }
                else {
                    int_number += 10;
                }
            }
            else if(s[index] == 'V') {
                int_number += 5;
            }
            else if(s[index] == 'I') {
                if(index != (str_length-1) and (s[index+1] == 'V' or s[index+1] == 'X')) {
                    int_number -= 1;
                }
                else {
                    int_number += 1;
                }
            }
            
        }
        return int_number;
    }
};