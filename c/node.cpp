#include <stdio.h>
#include <stdlib.h>

struct Node{
	int num;
	struct Node * pNext;
};

struct Node * pHead = NULL;
struct Node * pEnd = NULL;

void AddListEnd(int a)
{
	//创建节点
	struct Node * pTemp = (struct Node *)malloc(sizeof(struct Node));
	//节点数据赋值
	pTemp->num = a;
	pTemp->pNext = NULL;
	//链接
	if( pHead == NULL ){
		pHead = pTemp;
	}
	else{
		pEnd->pNext = pTemp;
	}
	pEnd = pTemp;
}

void AddListBegin(int a)
{
	struct Node * pTemp = (struct Node *)malloc(sizeof(struct Node));
	pTemp->num = a;
	pTemp->pNext = NULL;

	if( pHead == NULL ){
		pEnd = pTemp;
		//pHead = pTemp;
	}
	else{
		pTemp->pNext = pHead;
		//pHead = pTemp;
	}
	pHead = pTemp;
}
void ScanList()
{
	struct Node * pTemp = pHead;
	while( pTemp != NULL ){
		printf("%d",pTemp->num);
		pTemp = pTemp->pNext;
	}
}
struct Node * SearchNode(int a)
{
	struct Node * pTemp = pHead;
	while( pTemp != NULL ){
		if( pTemp->num == a ){
			return pTemp;
		}
		pTemp = pTemp->pNext;
	}
	return NULL;
}

void InsertList(int index, int a)
{
	if( pHead == NULL ){
		printf("no List");
		return ;
	}
	struct Node * pt = SearchNode(index);
	if( pt == NULL ){
		printf("no this List");
		return ;
	}
	struct Node * pTemp = (struct Node *)malloc(sizeof(struct Node));
	pTemp->num = a;
	pTemp->pNext = NULL;
	if( pt == pEnd ){
		pEnd->pNext = pTemp;
		pEnd = pTemp;
	}
	else{
		pTemp->pNext = pt->pNext;
		pt->pNext = pTemp;
	}
}
void FreeList()
{
	//释放节点
	struct Node *pTemp = pHead;
	while( pTemp != NULL ){
		struct Node * pt = pTemp;
		pTemp = pTemp->pNext;
		free(pt);
	}
	//头尾清空
	pHead = NULL;
	pEnd = NULL;
}
void AddListRand(int index, int a)
{
	if( NULL == g_pHead ){
		printf("have no node\n");
		return;
	}
	struct Node * pt = SearchNode(index);
	if( NULL == pt ){
		printf("cannot find index\n");
		return;
	}
	struct Node* pTemp = (struct Node *)malloc(sizeof(struct Node));
	pTemp->a = a;
	pTemp->pNext = NULL;

	if( pt == pHead ){
		pEnd->Next = pTemp;
		pEnd = pTemp;
	}
	else{
		pTemp->Next = pt->pNext;
		pt->pNext = pTemp;
	}
}
int main(void)
{

	struct Node * pTest = (struct Node *)malloc(sizeof(struct Node));
	for(int i = 0;i < 10;i++){
		AddListBegin(i);
		AddListEnd(i);
	}
	pTest = SearchNode(15);
	if( pTest != NULL ){
	printf("%d\n",pTest->num);
	}
	else{
		printf("cannot find!\n");
	}
	ScanList();
	InsertList(2,1);
	printf("\n");
	ScanList();
	return 0;
}


