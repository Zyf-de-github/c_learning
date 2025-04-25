#include "contact.h"


void menu()
{
	printf("*********************************\n");
	printf("*********************************\n");
	printf("**********  1   add      ********\n");
	printf("**********  2   del      ********\n");
	printf("**********  3  search    ********\n");
	printf("**********  4  modify    ********\n");
	printf("**********  5   show     ********\n");
	printf("**********  6   sort     ********\n");
	printf("**********  0   exit     ********\n");
	printf("*********************************\n");
	printf("*********************************\n");
	printf("*********************************\n");

}
int main()
{
	
	int input;
	contact con;
	int_contact(&con);

	
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add_contact(&con);
			break;
		case 2:
			del_contact(&con);
			break;
		case 3:
			search_contact(&con);
			break;
		case 4:
			modify_contact(&con);
			break;
		case 5:
			show_contact(&con);
			break;
		case 6:
			sort_contact(&con);
			break;
		case 0:
			save_contact(&con);
			printf("程序正在退出......\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}