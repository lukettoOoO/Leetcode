# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        p = head
        prev = ListNode()
        prev.next = p
        while p != None:
            q = p
            count = 0
            while q != None:
                count += 1
                q = q.next
            if count == n:
                if p == head:
                    head = head.next
                prev.next = p.next
                break
            prev = p
            p = p.next
        return head
        
