#include <stdio.h>

int main()
{ 
	char n[21];
	int age;
	char code;
	double secure;
	printf("이름을 입력 하세요:");
	scanf("%s", &n);
	printf("나이를 입력하세요 :");
	scanf("%d", &age);
	fflush(stdin);
	printf("부서코드를 입력하세요 :");
	scanf("%c",&code);
	printf("보안코드를 입력하세요 :");
	scanf("%lf",&secure);
	printf("******************************\n");
	printf("이름: %s\n",n); 
	printf("나이: %d\n",age);
	printf("부서코드: %c\n",code);
	printf("보안키: %.3lf\n",secure);
	printf("******************************\n");
	return 0;
}
