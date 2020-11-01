class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode* ptr = head;
        int prev = head->val;
        while(head->next != NULL){
            ListNode* next = head->next;
            while(next->val == prev){
                next = next->next;
                if(next == NULL){
                    head->next = NULL;
                    return ptr;
                }
            }
            head->next = next;
            prev = next->val;
            head = next;
        }
        return ptr;
    }
};