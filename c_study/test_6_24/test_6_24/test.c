#include <stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);//%p��ӡָ��
	int* pa = &a;//int* bΪָ�����
	            //*�������ı���Ϊָ��   intָ������Ϊ��������
	char ch = 'w';
	char* pch = &ch;
	printf("%p", pa);
	printf("%p", pch);
	//*p �����ò�����  ͨ��p�ĵ�ַ�ҵ�pָ��Ķ���
	//����*paΪ10��*pchΪw
	return 0;
}