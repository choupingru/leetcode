# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head: 'ListNode') -> 'ListNode':
        ptr = head
        if not head:
            return head
        prev = head.val
        while head.next:
            next_ = head.next
            while next_.val == prev :
                next_ = next_.next
                if not next_:
                    head.next = None
                    return ptr
            head.next = next_
            prev = next_.val
            head = next_
        return ptr