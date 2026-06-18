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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        int t = 1;
        if (head == NULL) {
            return 0;
        }

        while (temp->next != NULL) {
            t++;
            temp = temp->next;
        }
        
        temp = head;
        if (t == 1) {
            return NULL;
        }
        if(n==t){
            head=temp->next;
            temp->next=NULL;
            return head;
        }
        if (t == 2) {
            if(n==1){

            delete head->next;
            head->next = NULL;

            return head;
            }
            else{
           head=temp->next;
           temp->next=NULL;
            return head;
            
            }
        }

        int f = t - n - 1;
        while (f) {
            temp = temp->next;
            f--;
        }
        ListNode* tem = temp->next;
        temp->next = temp->next->next;
        tem->next = NULL;
        delete tem;
        return head;
    }
};