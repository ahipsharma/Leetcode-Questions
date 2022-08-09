class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // Naive approach:
        ListNode* d = head;
        int c = 0;
        while(d!=NULL){
            c++;
            d = d->next;
        }
        d = head;
        for(int i = 1; i <= c/2; i++){
            d = d->next;
        }
        return d;
        // Optimised code:
        // ListNode* slow = head, *fast = head;
        // while(fast != NULL && fast->next != NULL){
        //     fast = fast->next->next;
        //     slow = slow->next;
        // }
        // return slow;
    }
};