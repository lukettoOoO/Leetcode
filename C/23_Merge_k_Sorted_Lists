/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    int *array;
    int n = 0;
    int N = 0;
    for(int i = 0; i < listsSize; i++)
    {
        struct ListNode* current = lists[i];
        while(current != NULL)
        {
            N++;
            current = current->next;
        }
    }
    array = (int*)malloc(sizeof(int) * N);

    for(int i = 0; i < listsSize; i++)
    {
        struct ListNode* current = lists[i];
        while(current != NULL)
        {
            array[n++] = current->val;
            current = current->next;
        }
    }

    if(n == 0)
        return NULL;

    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(array[i] > array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }

    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    struct ListNode* sortedLists = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* current = sortedLists;
    current->val = array[0];
    current->next = NULL;
    for(int i = 1; i < n; i++)
    {
        struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = array[i];
        node->next = NULL;
        current->next = node;
        current = node;
    }

    return sortedLists;
}