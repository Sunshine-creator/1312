#include<stdio.h>
#include<windows.h>
#include<string.h>
#pragma warning(disable : 4996)
#if 0
int main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	system("pause");
	return 0;
}
#endif
#if 0

int Strlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
		return 1 + Strlen(str + 1);
}
int main()
	{
	char* p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
	}
#endif
#include<string.h>
#if 0
int main()
{
	char arr[10] = { 0 };
	int i = 0;
	for (; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("&arr[%c] = %p\n", i,  &arr[i]);
	}
		system("pause");
		return 0;
}
#endif // 0
#if 0
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	system("pause");
	return 0;
}
#endif // 0
#include<string.h>
#if 0
int main()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "bit"));
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif // 0
#if 0
int get_max(int s, int b)
{
	return (s > b) ? (s) : (b);	
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = get_max(num1, num2);
	printf("max=%d\n", max);
	system("pause");
	return 0;
}
#endif // 0
#if 0
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("******************\n");
	printf("******** 1.play *********\n");
	printf("******** 0.exit *********\n");
	printf("******************\n");
}
void game()
{
	int random_num = rand()% 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入选择的数>:");   猜数字游戏；
		scanf("%d\n", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入您的选择！\n");
		}
	} while (input);
	system("pause");
	return 0;
}
#endif // 0
#include<time.h>
//int main()
//{
//	char arr1[] = "weclome to lintong........";
//	char arr2[] = "#############################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];  
//		left++;
//		right--;
//		printf("%s\r", arr2);
//		printf("\n");
//		system("pause");
//		return 0;
//	}
//}
void Menu()
{
	primtf("###########################\n");
	primtf("#####1.Add   2.SUB ###########\n");
	primtf("###3.Mult  4.Div###############\n");
	primtf("##### 5. Exit #####\n");
	printf("please enter your selection :");
 }
int main()
{
	Menu();
	int selection = 0;
	printf("%d\n",& selection);
	switch (selection)
	{
	case 1 :
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	default:
		printf(" your selection is error,pilese try again!");
	}
	system("pause");
	return 0;
}



