class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_freq = []
        for i in range(256):
            char_freq.append(0)
        maxi = 0
        n = len(s)
        left = 0
        right = 0
        for right in range(0, n):
            char_freq[ord(s[right])] += 1
            while char_freq[ord(s[right])] > 1: #duplicate
                char_freq[ord(s[left])] -= 1
                left += 1
            if right - left + 1 > maxi:
                maxi = right - left + 1
        return maxi