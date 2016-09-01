/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
     struct ListNode *result, *l3;
    l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    result = l3;
    int carry = 0, addition = 0;
    while(l1 || l2) {
        if (l1) {
            addition+=l1->val;
            l1 = l1->next;
        }
        if(l2) {
            addition+=l2->val;
            l2 = l2->next;
        }
        addition+=carry;
        carry = addition/10;
        l3->val = addition%10;
        l3->next=NULL;
        if(l1 || l2) {
            l3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            l3=l3->next;
            l3->next = NULL;
        }
        else if(carry) {
            l3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            l3=l3->next;
            l3->val=carry;
            l3->next = NULL;
        }
        addition = 0;
    }
    return result;
}