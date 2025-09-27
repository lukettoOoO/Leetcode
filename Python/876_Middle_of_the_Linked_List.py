# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        node = head
        length = 0
        if node.next == None:
            return node
        while node != None:
            node = node.next
            length += 1
        #print(length)
        middle = length // 2
        count = 0
        node = head
        while node != None:
            node = node.next
            count += 1
            if count == middle:
                return node
        return None
