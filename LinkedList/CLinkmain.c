#include <stdio.h>
#include "CLinkedList.h"

int WhoIsPrecede(int d1, int d2)
{
	if (d1 < d2)
		return 0;
	else
		return 1;
}

int main()
{
	List list;
	int data, i, nodeNum;
	ListInit(&list);

	LInsert(&list, 3); 
	LInsert(&list, 4);
	LInsert(&list, 5); 
	LInsertFront(&list, 2);
	LInsertFront(&list, 1);

	printf("현재 데이터의 수: %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		for (i = 0; i < (LCount(&list) * 3) - 1; i++) {
			if(LNext(&list, &data))
				printf("%d ", data);
		}
	}
	printf("\n\n");

	nodeNum = LCount(&list);

	if (nodeNum != 0) {
		LFirst(&list, &data);
		if (data % 2 == 0)
			LRemove(&list);

			for (i = 0; i < nodeNum - 1; i++) {
				LNext(&list, &data);
				if (data % 2 == 0)
					LRemove(&list);
			}
	}

	printf("현재 데이터의 수: %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		for (i = 0; i < LCount(&list) - 1; i++) {
			if (LNext(&list, &data))
				printf("%d ", data);
		}
	}
	return 0;
}