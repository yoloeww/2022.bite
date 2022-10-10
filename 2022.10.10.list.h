// slist.h
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<assert.h>
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

// 动态申请一个节点
SLTNode *BuySListNode(SLTDataType x);
// 单链表打印
void SListPrint(SLTNode* plist);
// 单链表尾插
void SListPushBack(SLTNode** pplist, SLTDataType x);
// 单链表的头插
void SListPushFront(SLTNode** pplist, SLTDataType x);
// 单链表的尾删
void SListPopBack(SLTNode** pplist);
// 单链表头删
void SListPopFront(SLTNode** pplist);
// 单链表查找
SLTNode* SListFind(SLTNode* plist, SLTDataType x);
// 单链表在pos位置之后插入x
// 分析思考为什么不在
