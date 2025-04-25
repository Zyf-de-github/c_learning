#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <assert.h>
#include <stdlib.h>

//��������
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//�ṹ������
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

void int_contact(contact* pc);//��ʼ��

void add_contact(contact* pc);//����

void show_contact(const contact* pc);//չʾ

void del_contact(contact* pc);//ɾ��

void search_contact(const contact* pc);//��ѯ

void modify_contact(contact* pc);//�޸�

void sort_contact(contact* pc);//����

void save_contact(const contact* pc);//����

void load_contact(contact* pc);//����

