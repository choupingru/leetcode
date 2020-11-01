# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        if not l1: return l2
        if not l2: return l1
        answer = ListNode(0)
        current = answer
        h1, h2 = l1, l2
        while(h1 and h2):
            if(h1.val >= h2.val):
                current.next = h2
                h2 = h2.next
            else:
                current.next = h1
                h1 = h1.next
            current = current.next
            if not h1: current.next = h2
            if not h2: current.next = h1
        return answer.next
        
        