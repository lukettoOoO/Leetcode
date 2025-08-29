class Solution:
    def romanToInt(self, s: str) -> int:
        result = 0
        i = 0
        while i < len(s):
            if i + 1 < len(s) and s[i] == 'I' and s[i + 1] == 'V':
                result += 4
                i += 2
            elif i + 1 < len(s) and s[i] == 'I' and s[i + 1] == 'X':
                result += 9
                i += 2
            elif i + 1 < len(s) and s[i] == 'X' and s[i + 1] == 'L':
                result += 40
                i += 2
            elif i + 1 < len(s) and s[i] == 'X' and s[i + 1] == 'C':
                result += 90
                i += 2
            elif i + 1 < len(s) and s[i] == 'C' and s[i + 1] == 'D':
                result += 400
                i += 2
            elif i + 1 < len(s) and s[i] == 'C' and s[i + 1] == 'M':
                result += 900
                i += 2
            else:
                if s[i] == 'I':
                    result += 1
                elif s[i] == 'V':
                    result += 5
                elif s[i] == 'X':
                    result += 10
                elif s[i] == 'L':
                    result += 50
                elif s[i] == 'C':
                    result += 100
                elif s[i] == 'D':
                    result += 500
                elif s[i] == 'M':
                    result += 1000
                i += 1
        return result
