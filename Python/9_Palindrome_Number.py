class Solution:
    def isPalindrome(self, x: int) -> bool:
        p = 0
        if x < 0:
            return False
        aux = x
        while aux != 0:
            p = p * 10 + aux % 10
            aux = aux // 10
        if x == p:
            return True
        return False
