#define _CRT_SECURE_NO_WARNINGS 10


struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* middleNode(struct ListNode* head){

	struct ListNode* pSlow = head;
	struct ListNode* pFast = head;

	while (pFast && pFast->next){

		pFast = pFast->next->next;
		pSlow = pSlow->next;

	}
	return pSlow;

}