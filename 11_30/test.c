#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#pragma warning (disable : 4996)
#if 0
int divisor(int a, int b)
{
	int r =0;
	while ((r == a % b) != 0)
	{
		a = b;
		b = r;
	}
	return b;
 }
int multiple(int a, int b)
{
	int d;
	d = divisor(a, b);
	return a * b / d;
}
int main()
{
	int a, b, c;
	printf("please enter a,b:");
	scanf("%d %d", &a, &b);
	c = multiple(a, b);
	printf(" c= %d ", c);
	system("pause ");
	return 0;
}
int main()
{
    static struct  student
	
	 {
		long num;
		char name[20];
		char sex;
		char addr[40];
	 }a = { 1213,"½ªÔóÌÎ",'M ',"123 shaoshan road" };
	printf("No ; %ld\n Name :%s\n  Sex: %c\n Address: %s\n", a.num, a.name, a.sex, a.addr);
}
#endif // 0
struct stu_type
{
	char name[20];
	long num;
	int age;
	char sex;
};
int main()
{
	struct stud_type student[3], * p;
	int i;
	char numstr[20];
	for (i = 0, p = student; i < 3; p++, i++)
	{
		printf("Enter all data of student[%d]:\n", i);
		scanf(" %s %ld %d %c", p->name, &p->num, &p->age, &p->sex);
	}
	for (i = 0, p = student; p < student + 3; p++, i++)
	{
		printf(" %3d % -20s %8ld %6d %3c\n", i, p->name, p->num, p->age, p->sex);
	}
}