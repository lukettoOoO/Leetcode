# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode(0)
        current = head
        current1 = l1
        current2 = l2
        carry = 0
        current_digit = 0
        while current1 != None or current2 != None or carry != 0:
            summ = carry
            if current1 != None:
                summ += current1.val
                current1 = current1.next
            if current2 != None:
                summ += current2.val
                current2 = current2.next
            carry = summ // 10
            current_digit = summ % 10
            node = ListNode(current_digit)
            current.next = node
            current = current.next
        return head.next
