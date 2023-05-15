#include <stdio.h>
#include "Dummy_DBLinkedList.h"


int main()
{
	List list;
	int data, i, nodeNum;
	ListInit(&list);

	LInsert(&list, 1); LInsert(&list, 2);
	LInsert(&list, 3); LInsert(&list, 4);
	LInsert(&list, 5); LInsert(&list, 6);
	LInsert(&list, 7); LInsert(&list, 8);
	LInsert(&list, 9);

	//printf("현재 데이터의 수: %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);
		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
	}

	if (LFirst(&list, &data))
	{
		while (LNext(&list, &data)) {
			if (data % 2 == 1)
				LRemove(&list);
		}
	}
	printf("\n\n");

	if (LFirst(&list, &data))
	{
		printf("%d ", data);
		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
	}

	return 0;
}