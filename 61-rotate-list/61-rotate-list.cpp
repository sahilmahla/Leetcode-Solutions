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
    int length(ListNode* head){
        ListNode *pt = head;
        int len = 0;
        while(pt){
            len++;
            pt = pt->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *ptr1 = head,*ptr2 = head,*nh = NULL;
        k = k%length(head);
        if(k == 0) return head;
        for(int i = 0;i<k;i++){
            ptr2 = ptr2->next;
        }
        
        while(ptr2->next){
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }
        nh = ptr1->next;
        ptr1->next = NULL;
        ptr2->next = head;
        return nh;
    }
};