/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
    answer := &ListNode{}
    current := answer
    if l1 == nil{
        return l2
    }
    if l2 == nil{
        return l1
    }
    for l1 != nil && l2 != nil{
        if l1.Val >= l2.Val{
            current.Next = l2
            l2 = l2.Next
        }else{
            current.Next = l1
            l1 = l1.Next
        }
        current = current.Next
        if(l1 == nil){
            current.Next = l2
        }
        if(l2 == nil){
            current.Next = l1
        }
    }
    return answer.Next
}