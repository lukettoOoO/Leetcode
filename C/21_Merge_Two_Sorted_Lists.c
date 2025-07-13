/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    struct ListNode* mergeList = (struct ListNode*)malloc(sizeof(struct ListNode));
    mergeList->next = NULL;
    struct ListNode* head = mergeList;
    struct ListNode* node = NULL;

    while(list1 != NULL && list2 != NULL)
    {
        if(list1 != NULL && list1->val <= list2->val)
        {
            printf("%d ", list1->val);
            node = (struct ListNode*)malloc(sizeof(struct ListNode));
            node->val = list1->val;
            node->next = NULL;
            mergeList->next = node;
            mergeList = mergeList->next;
            list1 = list1->next;
        }
        else if(list2 != NULL && list2->val <= list1->val)
        {
            printf("%d ", list2->val);
            node = (struct ListNode*)malloc(sizeof(struct ListNode));
            node->val = list2->val;
            node->next = NULL;
            mergeList->next = node;
            mergeList = mergeList->next;
            list2 = list2->next;
        }
    }
    while(list1 != NULL)
    {
        printf("%d ", list1->val);
        node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = list1->val;
        node->next = NULL;
        mergeList->next = node;
        mergeList = mergeList->next;
        list1 = list1->next;
    }
    while(list2 != NULL)
    {
        printf("%d ", list2->val);
        node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = list2->val;
        node->next = NULL;
        mergeList->next = node;
        mergeList = mergeList->next;
        list2 = list2 ->next;
    }

    return head->next;
}
