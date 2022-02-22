#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("请输入密码：");
		char password[1024] = { 0 };
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			break;
		}
		printf("密码错误，请重新输入！");
	}if (i < 3) {
		printf("登陆成功！\n");
	}
	else {
		printf("登陆失败！\n");
	}
	system("pause");
	return 0;
}
