struct ListNode* deleteDuplicates(struct ListNode* head) {
    // If list is empty, return NULL
    if (head==NULL) return NULL;

    // While cur and its next node is not NULL (otherwise guaranteed to have no duplicate)
    while (head != NULL && head->next != NULL) {
        if (head->val == head->next->val) { // If the val of cur is the same as the val of the next node
            head->next = head->next->next; // Skip the node
        } else {
            head = head->next; // Otherwise move cur to the next node as usual
        }
    }
    return head;
}