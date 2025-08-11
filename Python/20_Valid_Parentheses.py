class Solution:
    def isValid(self, s: str) -> bool:
        list = []
        for c in s:
            if c == '(' or c == '[' or c == '{':
                list.append(c)
            elif c == ')' or c == ']' or c == '}':
                if list == []:
                    return False
                if list != []:
                    top = list.pop()
                    if c == ')' and top != '(':
                        return False
                    if c == ']' and top != '[':
                        return False
                    if c == '}' and top != '{':
                        return False
        if list == []:
            return True
        return False
