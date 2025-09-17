class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded = ""
        for s in strs:
            encoded += str(len(s)) + "@" + s
        print(encoded)
        return encoded

    def decode(self, s: str) -> List[str]:
        size = 0 #length of the list element
        decoded = []
        current = ""
        foundSeparator = False
        for c in s:
            if c == '@' and not foundSeparator:
                print(size)
                foundSeparator = True
                if size == 0:
                    decoded.append(current)
                    foundSeparator = False
                continue
            if not foundSeparator:
                size = size * 10 + int(c)
                continue
            size -= 1
            current += c
            if size == 0:
                decoded.append(current)
                current = ""
                foundSeparator = False
        return decoded
