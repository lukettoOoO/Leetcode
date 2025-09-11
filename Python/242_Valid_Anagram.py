class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        l1 = []
        l2 = []
        for c in s:
            l1.append(c)
        for c in t:
            l2.append(c)
        l1.sort()
        l2.sort()
        if l1 == l2:
            return True
        return False
