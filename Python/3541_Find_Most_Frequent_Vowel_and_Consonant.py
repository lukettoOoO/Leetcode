class Solution:
    def maxFreqSum(self, s: str) -> int:
        v = "aeiou"
        freq = {}
        for c in s:
            if c in freq:
                freq[c] += 1
            else:
                freq[c] = 1
        max_v = 0
        max_c = 0
        for c in freq:
            if c in v and freq[c] > max_v:
                max_v = freq[c]
            elif c not in v and freq[c] > max_c:
                max_c = freq[c]
        return max_v + max_c
