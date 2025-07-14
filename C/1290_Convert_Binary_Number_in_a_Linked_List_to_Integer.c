/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode* current = head;
    int count = 0;
    int decimal = 0;
    while(current != NULL)
    {
        count++;
        current = current->next;
    }
    current = head;
    while(current != NULL)
    {
        count--;
        decimal += current->val * pow(2, count);
        current = current->next;
    }
    return decimal;
}
