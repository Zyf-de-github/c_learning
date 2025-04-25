//文件的操作
//"r"只读
//"w"只写
//"a"追加
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
//	//写文件
//	char i = 'a';
//	for (i = 'a'; i < 'z'; i++)
//	{
//		fputc(i,pf);
//	}
//	//关闭文件
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
//	//读文件
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
//	//关闭文件
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
//	//写一行数据
//	fputs("hello bit\n", pf);
//	fputs("hello bit\n", pf);
//
//	//关闭文件
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
//	//读一行数据
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	//关闭文件
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
//	//关闭文件
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
//	//关闭文件
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
//	//关闭文件
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//scanf 是针对标准输入的格式化输入
//printf 是针对标准输出的格式化输出

//fscanf 是针对所有输出流的格式化输出
//fprintf 是针对所有输出流的格式化输出

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
//sprintf 是把一个格式化的内容转化为字符串
//sscanf 是从一个字符串中转化出一个格式化的内容

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
//打印结果 -> 5
//ftell 告诉指针偏移量

//rewind 初始化，回到起点