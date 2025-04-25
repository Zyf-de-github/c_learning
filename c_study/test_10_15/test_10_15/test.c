#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//布尔类型
#include <errno.h>//错误码

//int main() {
//	int a = 0;
//	while (1) {
//		scanf("%d", &a);
//		if (a > 0 && a < 1000) {
//			break;
//		}
//		printf("请重新输入\n");
//	}
//
//	int b = sqrt(a);
//	printf("%d\n", b);
//	return 0;
//}


////有问题***********************************************************************
//int main() {
//	char arr[50] = "0";
//	scanf("%c", arr);
//	int i = 0;
//	int letter = 0;
//	int blank = 0;
//	int num = 0;
//	int others = 0;
//	while (arr[i] == '\0') {
//		if ((int)arr[i] <= (int)'z' && (int)arr[i] >= (int)'A') {
//			letter++;
//			i++;
//		} else if (arr[i] = ' ') {
//			blank++;
//			i++;
//		} else if ((int)arr[i] >= (int)'0' && (int)arr[i] <= (int)'9') {
//			num++;
//			i++;
//		} else {
//			others++;
//			i++;
//		}
//	}
//	printf("letter = %d\nblank = %d\nnum = %d\nothers = %d\n", letter, blank, num, others);
//	return 0;
//}//*****************************************************************************


//int main() {
//	float a = 1.0;
//	float b = 1.0;
//	float c = 0.0;
//	float sum = 0.0;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		sum = sum + (a + b) / a;
//		c = a;
//		a = a + b;
//		b = c;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main() {
//	int arr[100] = {0};
//	int n = 0;
//	for (n = 0; n < 100; n++) {
//		arr[n] = n + 1;
////		printf("%d ", arr[n]);
//	}
//	int i = 0;
//	for (i = 2; i < 100; i++) {
//		int j = 0;
//		for (j = 2; i * j <= 100; j++) {
//			arr[i * j - 1] = 0;
//		}
//	}
//	for (n = 0; n < 100; n++) {
//		if (arr[n] != 0 && arr[n] != 1)
//			printf("%d ", arr[n]);
//	}
//	return 0;
//}


//int main() {
//	int arr1[10] = {3, 5, 2, 6, 4, 9, 8, 7, 1, 0};
//	int n, a;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		for (n = i; n < 10; n++) {
//			if (arr1[i] > arr1[n]) {
//				int mid = arr1[i];
//				arr1[i] = arr1[n];
//				arr1[n] = mid;
//			}
//		}
//	}
//	for (a = 0; a < 10; a++)
//		printf("%d ", arr1[a]);
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//	printf("%s\n", strerror(6));
//	printf("%s\n", strerror(7));
//	printf("%s\n", strerror(8));
//
//
//	return 0;
//}


//memcopy*****