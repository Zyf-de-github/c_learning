#include "contact.h"

void load_contact(contact* pc)
{
	FILE* pf_read = fopen("contact.txt", "rb");
	if (pf_read == NULL)
	{
		perror("load_contact");//报错
		return;
	}

	people tmp = { 0 };
	while (fread(&tmp, sizeof(people), 1, pf_read) == 1)
	{
		pc->date[pc->count] = tmp;
		pc->count++;
	}

	fclose(pf_read);
	pf_read = NULL;
}

void int_contact(contact* pc)
{
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));

	load_contact(pc);
}



void add_contact(contact* pc)
{
	if (pc->count == MAX)
	{
		printf("通讯录已满，加入失败\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->date[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->date[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->date[pc->count].sex);
	printf("请输入电话:>");
	scanf("%s", pc->date[pc->count].tele);
	printf("请输入住址:>");
	scanf("%s", pc->date[pc->count].addr);
	pc->count++;
	printf("增加成功\n");
}



void show_contact(const contact* pc)
{
	assert(pc);//断言
	int i;
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-3d\t%-10s\t%-12s\t%-30s\n",    pc->date[i].name,
														pc->date[i].age, 
														pc->date[i].sex,
														pc->date[i].tele,
														pc->date[i].addr);
	}
}



static int finding_name(const contact* pc, char name[])
{
	assert(pc);
	int i;
	for (i = 0; i < pc->count; i++)
	{
		
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}



void del_contact(contact* pc)
{
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("无数据,无可删除的信息\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入被删除人的姓名\n");
	scanf("%s", name);
	int flage = finding_name(pc, name);
	if (flage == -1)
	{
		printf("查无此人信息\n");
		return;
	}
	for (i = flage; i < pc->count - 1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}



void search_contact(const contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入被查找人的姓名\n");
	scanf("%s", name);
	int i = finding_name(pc, name);
	if (i == -1)
	{
		printf("查无此人\n");
		return;
	}
	printf("查找成功\n");
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "name", "age", "sex", "tele", "addr");
	printf("%-20s\t%-3d\t%-10s\t%-12s\t%-30s\n", 
		pc->date[i].name,
		pc->date[i].age,
		pc->date[i].sex,
		pc->date[i].tele,
		pc->date[i].addr);
}



void modify_contact(contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入被修改人的姓名\n");
	scanf("%s", name);
	int i = finding_name(pc, name);
	if (i == -1)
	{
		printf("查无此人\n");
		return;
	}
	printf("查找成功\n");
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "name", "age", "sex", "tele", "addr");
	printf("%-20s\t%-3d\t%-10s\t%-12s\t%-30s\n", pc->date[i].name,
		pc->date[i].age,
		pc->date[i].sex,
		pc->date[i].tele,
		pc->date[i].addr);
	printf("请输入修改的信息\n");
	printf("请输入名字:>");
	scanf("%s", pc->date[i].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->date[i].age));
	printf("请输入性别:>");
	scanf("%s", pc->date[i].sex);
	printf("请输入电话:>");
	scanf("%s", pc->date[i].tele);
	printf("请输入住址:>");
	scanf("%s", pc->date[i].addr);
	printf("修改成功\n");
}



int com_people_by_name(const void* e1, const void* e2)
{
	return strcmp(((people*)e1)->name, ((people*)e2)->name);
	
}



void sort_contact(contact* pc)
{
	assert(pc);
	qsort(pc->date, pc->count, sizeof(people), com_people_by_name);
	printf("排序成功\n");
}

void save_contact(const contact* pc)
{
	assert(pc);
	FILE* pf_write = fopen("contact.txt", "wb");
	if (pf_write == NULL)
	{
		perror("save_contact");
		return;
	}

	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->date+i, sizeof(people), 1, pf_write);
	}

	printf("文件保存成功\n");

	fclose(pf_write);
	pf_write = NULL;
}
