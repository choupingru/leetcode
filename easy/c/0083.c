/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL)return head;
    struct ListNode* ptr = head;
    struct ListNode* cur = head->next;
    while(head->next != NULL){
        if(head->next->val == head->val){
            cur = head->next;
            head->next = cur->next;
            free(cur);
        }else{
            head = head->next;
        }
    }
    return ptr;
}