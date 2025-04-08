#include <stdio.h>
void main()
{
	char k;
	int a, b, c, result;

	printf("연산 선택 (+ 또는 *) =>");
	scanf_s(" %c", &k, 1);

	printf("첫 번째 값 =>");
	scanf_s("%d", &a);
	
	printf("두 번째 값 =>");
	scanf_s("%d", &b);

	printf("세 번째 값 =>");
	scanf_s("%d", &c);

	if (k == '+') {
		result = a + b + c;
		printf("%d + %d + %d = %d\n", a, b, c, result);
	} 
	if(k == '*') {
		result = a * b * c;
		printf("%d * %d * %d = %d\n", a, b, c, result);
	}
	

}
