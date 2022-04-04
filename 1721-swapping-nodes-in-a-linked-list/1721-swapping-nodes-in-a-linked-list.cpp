/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *slow = head,*fast = head,*pt = head;
        for(int i = 1;i<k;i++){
            fast = fast->next;
            pt = pt->next;
        }
        
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        
        int temp;
        temp = pt->val;
        pt->val = slow->val;
        slow->val = temp;
      
        return head;
    }
};