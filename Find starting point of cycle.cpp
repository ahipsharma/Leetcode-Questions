class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* ptr = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                while(slow != ptr){
                    slow = slow->next;
                    ptr = ptr->next;
                }
                return ptr;
            }
        }
        return NULL;
    }
};