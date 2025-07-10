/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 0;
    head->next = NULL;
    struct ListNode *current = head;
    int carry = 0;
    int current_digit;

    while(l1 != NULL || l2 != NULL || carry != 0)
    {
        int sum = carry;
        if(l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        current_digit = sum % 10;

        struct ListNode *node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = current_digit;
        node->next = NULL;

        current->next = node;
        current = current->next;
    }

    struct ListNode *result = head->next;
    return result;
}