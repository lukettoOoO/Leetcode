class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = []
        sorted_strs = []
        for s in strs:
            sorted_strs.append(sorted(s))
        for i in range(len(strs)):
            item = []
            item.append(strs[i])
            for j in range(i + 1, len(strs)):
                if sorted_strs[i] == sorted_strs[j]:
                    item.append(strs[j])
            print(item)
            toAppend = True
            for s in item:
                for ana in anagrams:
                    if s in ana:
                        toAppend = False
            if toAppend:
                anagrams.append(item)
        return anagrams
