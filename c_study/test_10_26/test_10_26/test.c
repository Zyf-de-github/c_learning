//�ļ��Ĳ���
//"r"ֻ��
//"w"ֻд
//"a"׷��
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main() 
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д�ļ�
//	char i = 'a';
//	for (i = 'a'; i < 'z'; i++)
//	{
//		fputc(i,pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main() 
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//дһ������
//	fputs("hello bit\n", pf);
//	fputs("hello bit\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/  
//		perror("fopen");
//		return 1;
//	}
//	//��һ������
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct s
{
	char arr[10];
	int age;
	float score;
};
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	struct s s = { "zhangsan",18,50.50 };
//	fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	struct s s = { 0 };
//	fscanf(pf, "%s %d %f", s.arr, &s.age, &s.score);
//	//printf("%s %d %f", s.arr, s.age, s.score);
//	fprintf(stdout,"%s %d %f", s.arr, s.age, s.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	struct s s = { "zhangsan",18,50.5f };
//	fwrite(&s, sizeof(struct s), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	struct s s;
//	fread(&s, sizeof(struct s), 1, pf);
//	printf("%s %d %f", s.arr, s.age, s.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//scanf ����Ա�׼����ĸ�ʽ������
//printf ����Ա�׼����ĸ�ʽ�����

//fscanf ���������������ĸ�ʽ�����
//fprintf ���������������ĸ�ʽ�����

int main()
{
	struct s s = { "zhangsan",18,50.5f };
	char buf[1000];
	struct s tmp = { 0 };
	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
	printf("%s\n", buf);
	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
	printf("%s %d %f", tmp.arr, tmp.age, tmp.score);
	return 0;
}
//sprintf �ǰ�һ����ʽ��������ת��Ϊ�ַ���
//sscanf �Ǵ�һ���ַ�����ת����һ����ʽ��������

//fgets  fputs
//fgetc  fputc
//fread  fwrite
//fscanf 



//abcdef
//fessk(pf,2,SEEK_SET) -> c  fessk(pf,2,SEEK_CUR) -> e
// 
// 
//fessk(pf,-2,SEEL_ENF) -> d
//printf("%d\n",ftell(pf))
//��ӡ��� -> 5
//ftell ����ָ��ƫ����

//rewind ��ʼ�����ص����