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
 #include <algorithm>
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* Ptr1 = head;
        ListNode* Ptr2 = head->next;
        while(Ptr2!=nullptr){
            ListNode* TempNode = new ListNode();
            TempNode->next=Ptr2;
            Ptr1->next=TempNode;
            TempNode->val=__gcd(Ptr1->val,Ptr2->val);
            Ptr1=Ptr2;
            Ptr2=Ptr2->next;
        }
        return head;
    }
};