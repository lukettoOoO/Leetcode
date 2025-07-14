/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* p = head;
    struct ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
    prev->next = p;
    while(p != NULL)
    {
        struct ListNode* q = p;
        int count = 0;
        while(q != NULL)
        {
            count++;
            q = q->next;
        }
        printf("%d ", count);
        if(count == n)
        {
            if(p == head)
            {
                head = head->next;
            }
            prev->next = p->next;
            break;
        }
        prev = p;
        p = p->next;
    }
    return head;
}
