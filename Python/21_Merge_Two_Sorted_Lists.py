# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        mergeList = ListNode()
        head = mergeList
        while list1 and list2:
            if list1.val <= list2.val:
                node = ListNode(list1.val)
                list1 = list1.next
            elif list2.val <= list1.val:
                node = ListNode(list2.val)
                list2 = list2.next
            mergeList.next = node
            mergeList = mergeList.next
        while list1:
            node = ListNode(list1.val)
            mergeList.next = node
            mergeList = mergeList.next
            list1 = list1.next
        while list2:
            node = ListNode(list2.val)
            mergeList.next = node
            mergeList = mergeList.next
            list2 = list2.next
        return head.next


        
