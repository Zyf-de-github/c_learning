#include "contact.h"

void load_contact(contact* pc)
{
	FILE* pf_read = fopen("contact.txt", "rb");
	if (pf_read == NULL)
	{
		perror("load_contact");//����
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
		printf("ͨѶ¼����������ʧ��\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->date[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->date[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->date[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->date[pc->count].tele);
	printf("������סַ:>");
	scanf("%s", pc->date[pc->count].addr);
	pc->count++;
	printf("���ӳɹ�\n");
}



void show_contact(const contact* pc)
{
	assert(pc);//����
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
		printf("������,�޿�ɾ������Ϣ\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("�����뱻ɾ���˵�����\n");
	scanf("%s", name);
	int flage = finding_name(pc, name);
	if (flage == -1)
	{
		printf("���޴�����Ϣ\n");
		return;
	}
	for (i = flage; i < pc->count - 1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}



void search_contact(const contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("�����뱻�����˵�����\n");
	scanf("%s", name);
	int i = finding_name(pc, name);
	if (i == -1)
	{
		printf("���޴���\n");
		return;
	}
	printf("���ҳɹ�\n");
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
	printf("�����뱻�޸��˵�����\n");
	scanf("%s", name);
	int i = finding_name(pc, name);
	if (i == -1)
	{
		printf("���޴���\n");
		return;
	}
	printf("���ҳɹ�\n");
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "name", "age", "sex", "tele", "addr");
	printf("%-20s\t%-3d\t%-10s\t%-12s\t%-30s\n", pc->date[i].name,
		pc->date[i].age,
		pc->date[i].sex,
		pc->date[i].tele,
		pc->date[i].addr);
	printf("�������޸ĵ���Ϣ\n");
	printf("����������:>");
	scanf("%s", pc->date[i].name);
	printf("����������:>");
	scanf("%d", &(pc->date[i].age));
	printf("�������Ա�:>");
	scanf("%s", pc->date[i].sex);
	printf("������绰:>");
	scanf("%s", pc->date[i].tele);
	printf("������סַ:>");
	scanf("%s", pc->date[i].addr);
	printf("�޸ĳɹ�\n");
}



int com_people_by_name(const void* e1, const void* e2)
{
	return strcmp(((people*)e1)->name, ((people*)e2)->name);
	
}



void sort_contact(contact* pc)
{
	assert(pc);
	qsort(pc->date, pc->count, sizeof(people), com_people_by_name);
	printf("����ɹ�\n");
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

	printf("�ļ�����ɹ�\n");

	fclose(pf_write);
	pf_write = NULL;
}
