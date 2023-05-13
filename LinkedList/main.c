#include <stdio.h>
#include "ArrayList.h"

int main()
{
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 11); LInsert(&list, 22);
	LInsert(&list, 33); LInsert(&list, 44);
	LInsert(&list, 55); LInsert(&list, 66);

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
}