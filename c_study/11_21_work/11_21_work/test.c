#include <stdio.h>
int main()
{
	//	printf("%c",a);
	int i = 0;
	int point = 0;
	int flag0 = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
	char arr[50] = { 0 };
	gets(arr);
	if (arr[7] != 0)
		flag0 = 1;
	for (i = 0; i < 50; i++)
	{
		if ((int)arr[i] <= 122 && (int)arr[i] >= 97)
			flag1 = 1;
		if ((int)arr[i] <= 90 && (int)arr[i] >= 65)
			flag2 = 1;
		if((int)arr[i] <= 57 && (int)arr[i] >= 48)
			flag3 = 1;
		if (((int)arr[i] > 90 || (int)arr[i] < 65) && ((int)arr[i] > 122 || (int)arr[i]) < 97 &&((int)arr[i]>39|| (int)arr[i] < 30))
			flag4 = 1;
	}
	if (flag0)
		point++;
	if (flag1)
		point++;
	if (flag2) 
		point++;
	if (flag3)
		point++;
	if (flag4)
		point++;
	if (arr[0] == 0)
		point = 0;
	printf("%d\n", point);
	return 0;
}