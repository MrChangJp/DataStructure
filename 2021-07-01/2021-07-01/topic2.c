#include "topic.h"
/*
将两个非递减的有序链表合并为一个非递增的有序链表。要求结果链表仍使用原来两个
链表的存储空间，不另外占用其他的存储空间。表中允许有重复的数据。
*/
test1(LinkedList l1, LinkedList l2){

	if (!l1)return l2;
	if (!l2)return l1;

	LNode* newLink = NULL;
	if (l1->data <= l2->data){
		newLink = l1;
		l1 = l1->next;
	}
	else{
		newLink = l2;
		l2 = l2->next;
	}
	LNode* head = newLink;
	while (l1&&l2){
		if (l1->data <= l2->data){
			newLink->next = l1;
			l1 = l1->next;
			newLink = newLink->next;
		}
		else{
			newLink->next = l2;
			l2 = l2->next;
			newLink = newLink->next;
		}
	}

	if (!l1) newLink->next = l2;
	if (!l2) newLink->next = l1;

	return head;



}