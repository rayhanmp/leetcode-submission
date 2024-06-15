struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // Initiate a dummy List
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode* cur = &dummy;

    // Initiate carry var
    int carry = 0;

    // While l1, l2, or carry is not 0
    while (l1 != NULL || l2 != NULL || carry != 0) {
        // If the node is not null, set the value to val, otherwise set it to 0
        int val1 = (l1 != NULL) ? l1->val : 0;
        int val2 = (l2 != NULL) ? l2->val : 0;

        // Sum all the value
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;

        // Iniate new node for cur and store the value
        cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        cur->next->val = sum;
        cur->next->next = NULL;

        // Move cur to the next node
        cur = cur->next;

        // Move l1 and l2 to the next node
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }
    
    return dummy.next;
}
