class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        my_dict = {}
        for c in magazine:
            my_dict[c] = 0
        for c in magazine:
            my_dict[c] += 1
        for c in ransomNote:
            if c in my_dict.keys():
                my_dict[c] -= 1
                if my_dict[c] < 0:
                    return False
            else:
                return False
        return True
