#include "contact.h"

void menu()
{
	printf("*******************************************\n");
	printf("******* 1 calculated value at risk  *******\n");
	printf("******* 2 updata general risk valus *******\n");
	printf("******* 0          exit             *******\n");
	printf("*******************************************\n");
	return 0;
}

int main()
{
	int i = 0;
	do
	{
		menu();
		scanf("%d", &i);
		switch (i)
		{
			case 1:
				calculated();
				break;
			case 2:
				updata();
				break;
			case 0:
				printf("quitting...\n");
				break;
			default:
				printf("input error, please re-enter\n");
				break;
		}
	} while (i);
	return 0;
}