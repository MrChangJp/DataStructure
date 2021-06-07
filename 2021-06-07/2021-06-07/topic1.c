//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//
//
//struct ListNode {
//    int val;
//    struct ListNode *next;
//};
//
////删除排序链表中的重复元素 II
//typedef struct ListNode ListNode;
//struct ListNode* deleteDuplicates(struct ListNode* pHead){
//	if (!pHead || !pHead->next) return pHead;
//
//	ListNode* fastNode = pHead;
//	ListNode* nextNode = pHead->next;
//	ListNode* priv = NULL;
//
//	while (fastNode && nextNode){
//
//		if (fastNode->val == nextNode->val) {
//
//
//			while (nextNode){
//				if (fastNode->val != nextNode->val){
//					break;
//				}
//				nextNode = nextNode->next;
//
//			}
//			if (fastNode == pHead){
//				pHead = nextNode;
//			}
//			else{
//
//				priv->next = nextNode;
//
//			}
//			while (fastNode != nextNode){
//
//				ListNode* newHeadNode = fastNode;
//				fastNode = fastNode->next;
//				free(newHeadNode);
//				newHeadNode = NULL;
//			}
//
//			fastNode = nextNode;
//			if (nextNode)
//				nextNode = nextNode->next;
//
//
//		}
//		else{
//			priv = fastNode;
//			fastNode = nextNode;
//			nextNode = nextNode->next;
//		}
//
//
//
//	}
//
//	return pHead;
//
//}
//
//int main(){
//
//	struct ListNode* ListNodea = (struct ListNode*)malloc(sizeof(struct ListNode));
//	ListNodea->val = 0;
//	ListNodea->next = NULL;
//
//	struct ListNode* ListNode = (struct ListNode*)malloc(sizeof(struct ListNode));
//	ListNode->val = 3;
//	ListNode->next = ListNodea;
//
//	struct ListNode* ListNode1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	ListNode1->val = 1;
//	ListNode1->next = ListNode;
//
//	struct ListNode* ListNode2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	ListNode2->val = 2;
//	ListNode2->next = ListNode1;
//
//	struct ListNode* ListNode3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	ListNode3->val = 4;
//	ListNode3->next = ListNode2;
//	//[4,2,1,3]
//	insertionSortList(ListNode3);
//	return 0;
//}