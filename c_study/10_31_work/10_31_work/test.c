#define _CRT_SECURE_NO_WARNINGS

//int main() {
//	int y, m, pm;
//	scanf("%d %d", &y, &m);
//	if (m == 2) {
//		if ((y % 4 == 0 && y % 100 != 0) || y % 40 == 0)
//			pm = 29;
//		else
//			pm = 28;
//	}
//	else {
//		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//			pm = 31;
//		else
//			pm = 30;
//	}
//	printf("%d\n", pm);
//	return 0;
//}
//
//
//
//
//#include <stdio.h>
//
//int main() {
//	double use = 0;
//	double sum = 0;
//	double a = 0;
//	scanf("%lf", &use);
//	if (use <= 110) {
//		sum = use * 0.5;
//	}
//	else {
//		sum = 110 * 0.5;
//		if (use <= 210) {
//			sum = sum + (use - 110) * 0.55;
//		}
//		else {
//			sum = 110 * 0.5 + 100 * 0.55 + (use - 210) * 0.7;
//		}
//	}
//	printf("%.2lf\n", sum);
//	return 0;
//}
//
//
//
//
//int main() {
//	int n;
//	int flage = 0;
//	scanf("%d", &n);
//	while (n != 1) {
//		if (n % 2 == 0) {
//			n = n / 2;
//		}
//		else {
//			n = 3 * n + 1;
//		}
//		flage++;
//	}
//	printf("%d\n", flage);
//	return 0;
//}
//
//
//
//
//int main() {
//	int a, b, i, min;
//	int flage = 0;
//	scanf("%d%d", &a, &b);
//	if (a <= b)
//		min = a;
//	else
//		min = b;
//	if (a == 0 || b == 0) {
//		if (a != 0)
//			printf("%d\n", a);
//		else
//			printf("%d\n", b);
//	}
//	else if (a == 1 || b == 1) {
//		printf("1\n");
//	}
//	else {
//		for (i = 1; i <= min; i++) {
//			if (a % i == 0 && b % i == 0) {
//				if (i > flage)
//					flage = i;
//			}
//		}
//		printf("%d\n", flage);
//	}
//	return 0;
//}
//
//
//
//
//int main() {
//	int a, b;
//	int sum = 0;
//	scanf("%d", &a);
//	while (a) {
//		b = a % 10;
//		sum = b + sum;
//		a = a / 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//
//
//int main() {
//	int a, b, c;
//	int max;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b) {
//		if (a > c)
//			max = a;
//		else
//			max = c;
//	}
//	else {
//		if (b > c)
//			max = b;
//		else
//			max = c;
//	}
//	if (a * a + b * b + c * c - max * max == max * max) {
//		printf("%d\n", a * b * c / max);
//	}
//	else {
//		printf("no\n");
//	}
//	return 0;
//}
//
//
//
//int main() {
//	char a;
//	scanf("%c", &a);
//	if (a >= 'a' && a <= 'z') {
//		printf("%c\n", a - 32);
//	}
//	else if (a >= 'A' && a <= 'Z') {
//		printf("%c\n", a + 32);
//	}
//	else
//		printf("%c\n", a);
//	return 0;
//}
//
//
//
//
//int main() {
//	int arr[4] = { 0 };
//	int i, max;
//	for (i = 0; i < 4; i++) {
//		scanf("%d", &arr[i]);
//	}
//	//	for (i = 0; i < 4; i++) {
//	//		printf("%d ", arr[i]);
//	//	}
//	max = arr[0];
//	for (i = 1; i < 4; i++) {
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int m, n, a, i, j;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	int arr3[100][100] = { 0 };
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < m; i++)
//	{
//		for(j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		a = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i][a] > arr1[i][j])
//				a = j;
//		}
//		arr2[i][a] = 1;
//	}
//	for (i = 0; i < n; i++)
//	{
//		a = 0;
//		for (j = 0; j < m; j++)
//		{
//			if (arr1[a][i] < arr1[j][i])
//				a = j;
//		}
//		arr3[a][i] = 1;
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr2[i][j] * arr3[i][j])
//			{
//				printf("%d %d %d\n", i, j, arr1[i][j]);
//			}
//		}
//	}
//
//
//
//	return 0;
//}


#include <stdio.h>
#include <math.h>
int function(int a)
{
	int x = 0;
	int b = a;
	int e = a;
	int c, d;
	int sum = 0;
	while (b)
	{
		x++;
		b = b / 10;
	}
	for (c = 0; c < x; c++)
	{
		d = e;
		d = e % 10;
		e = e / 10;
		sum = sum + pow(d, x);
	}
	if (sum == a)
		return 1;
	else
		return 0;
}
int main()
{
	int a, b, i, c;
	int count = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	for (i = a; i < b + 1; i++)
	{
		if (i >= 100)
		{
			if (function(i))
				count++;
		}
	}
	printf("%d\n", count);
	return 0;
}



























