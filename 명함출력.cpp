#include <stdio.h>

int main()
{ 
	char n[21];
	int age;
	char code;
	double secure;
	printf("�̸��� �Է� �ϼ���:");
	scanf("%s", &n);
	printf("���̸� �Է��ϼ��� :");
	scanf("%d", &age);
	fflush(stdin);
	printf("�μ��ڵ带 �Է��ϼ��� :");
	scanf("%c",&code);
	printf("�����ڵ带 �Է��ϼ��� :");
	scanf("%lf",&secure);
	printf("******************************\n");
	printf("�̸�: %s\n",n); 
	printf("����: %d\n",age);
	printf("�μ��ڵ�: %c\n",code);
	printf("����Ű: %.3lf\n",secure);
	printf("******************************\n");
	return 0;
}
