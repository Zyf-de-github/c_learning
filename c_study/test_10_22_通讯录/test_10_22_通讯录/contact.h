#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <assert.h>
#include <stdlib.h>

//参数设置
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//结构体设置
typedef struct people
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}people;

typedef struct contact
{
	people date[MAX];
	int count;
}contact;

void int_contact(contact* pc);//初始化

void add_contact(contact* pc);//增加

void show_contact(const contact* pc);//展示

void del_contact(contact* pc);//删除

void search_contact(const contact* pc);//查询

void modify_contact(contact* pc);//修改

void sort_contact(contact* pc);//排序

void save_contact(const contact* pc);//保存

void load_contact(contact* pc);//下载

