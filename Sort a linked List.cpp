class Solution {
private:
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* l1, ListNode*l2){
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        while(l1 != NULL && l2!=NULL){
            if(l1->val < l2->val){
                temp->next = l1;
                temp = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                temp = l2;
                l2 = l2->next;
            }
        }
        if(l1!=NULL){
            temp->next = l1;
            temp = l1;
            l1 = l1->next;
        }
        if(l2!=NULL){
            temp->next = l2;
            temp = l2;
            l2 = l2->next;
        }
        ans = ans->next; // IMPORTANT STEP.
        return ans;
    }
public:
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;
        // Find mid element of Linked List
        ListNode*mid = findMid(head);
        
        // Pointing the 
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;
        
        
        left = sortList(left);
        right = sortList(right);
        
        // Merge 2 halves.
        ListNode* result = merge(left, right);
        return result;
    }
};