#include <stdio.h>

//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a / b);
//	return 0;
//}

//int main() {
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d\n", a + b + c);
//	return 0;
//}

//int main() {
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d\n", a + b + c);
//	return 0;
//}


//int main() {
//	int a, b;
//	scanf("%d%d", &a, &b);
//	float t = a + b / 60.0;
//	float T = 4 * t * t / (t + 2) - 20;
//	printf("%.2f", T);
//	return 0;
//}
//
//
//int main() {
//	int a, b, c, d;
//	int flag = 0;
//	scanf("%d%d%d", &a, &b, &d);
//	c = d % 10;
//	printf("%d ", c);
//	if (1 <= a && a <= 5) {
//		if (200 <= b && b < 400) {
//			if (a == 1) {
//				if (c == 1 || c == 6)
//					flag = 1;
//			}
//			else if (a == 2) {
//				if (c == 2 || c == 7)
//					flag = 1;
//			}
//			else if (a == 3) {
//				if (c == 3 || c == 8)
//					flag = 1;
//			}
//			else if (a == 4) {
//				if (c == 4 || c == 9)
//					flag = 1;
//			}
//			else {
//				if (c == 5 || c == 0)
//					flag = 1;
//			}
//		}
//		else if (400 <= b) {
//			if (a == 1 || a == 3 || a == 5) {
//				if (c == 1 || c == 3 || c == 5 || c == 7 || c == 9)
//					flag = 1;
//			}
//			else {
//				if (c == 2 || c == 4 || c == 6 || c == 8 || c == 0)
//					flag = 1;
//			}
//		}
//	}
//	if (flag == 0)
//		printf("no\n");
//	if (flag == 1)
//		printf("yes\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int m, n, q, r;
//	scanf("%d%d%d%d", &m, &n, &q, &r);
//	int a, b;
//	a = m / n;
//	b = m % n;
//	if (a == q && b == r) {
//		printf("yes");
//	}
//	else {
//		printf("%d %d", a, b);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int a;
//	float b;
//	scanf("%d", &a);
//	b = (float)(a - 32) * 5 / 9;
//	printf("%.2f", b);
//	return 0;
//}

//#include <stdio.h>
//#define PI 3.1415926
//
//int main() {
//	int a, b;
//	float c, d;
//	scanf("%d%d", &a, &b);
//	c = 7.86 * PI * a * a * a * 4.0 / (3 * 8000);
//	d = 19.3 * PI * b * b * b * 4.0 / (3 * 8000);
//	printf("%.3f %.3f", c, d);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//	int a, i;
//	scanf("%d", &a);
//	int arr[1000] = { 0 };
//	for (i = 0; i < a; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int f = 1;
//	for (i = 0; i < a - 1; i++) {
//		if (arr[i] != arr[i + 1])
//			f++;
//	}
//	printf("%d\n", f);
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//	int a, b;
//	char c;
//	scanf("%d%c%d", &a, &c, &b);
//	if (c == '+')
//		printf("%d+%d=%d\n", a, b, a + b);
//	if (c == '-')
//		printf("%d-%d=%d\n", a, b, a - b);
//	if (c == '*')
//		printf("%d*%d=%d\n", a, b, a * b);
//	if (c == '/')
//		printf("%d/%d=%d\n", a, b, a / b);
//	if (c == '%')
//		printf("%d%%%d=%d\n", a, b, a % b);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int a, i, j;
//	scanf("%d", &a);
//	int arr[1000] = { 0 };
//	for (i = 0; i < a; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int flag = abs(arr[0] - arr[1]);
//	for (i = 0; i < a - 1; i++) {
//		for (j = i + 1; j < a; j++) {
//			if (abs(arr[i] - arr[j]) < flag)
//				flag = abs(arr[i] - arr[j]);
//		}
//		if (flag == 0) {
//			printf("%d\n", abs(flag));
//			break;
//		}
//	}
//	if (flag != 0)
//		printf("%d\n", abs(flag));
//
//
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int i = 0;
//	int j = 0;
//	int q = 0;
//	char arr[20] = {};
//	scanf("%s", arr);
//	q = strlen(arr);
//	for (i = 0; i < q; i++) {
//		if (arr[i] != '|') {
//			int j = (int)arr[i] + 32;
//			printf("%c", (char)j);
//		}
//	}
//	printf("!");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a / b);
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a % b == 0)
//		printf("yes");
//	else
//		printf("%d %d", a / b, a % b);
//	return 0;
//}