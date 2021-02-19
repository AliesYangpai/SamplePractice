#define _CRT_SECURE_NO_WARNINGS 1
extern "C" {
#include "demo_sort/base_sort.h"
#include "demo_lib_operate/lib_operate_str/operate_string_method.h"
#include "demo_lib_operate/lib_operate_mem/operate_mem_method.h"
}
#include <iostream>
#include "demo_print/base_print.h"
#include "demo_geometry/Cube.h"
#include "demo_player/bean/player_base_soccer.h"
#include "demo_player/player_method.h"
using namespace std;
#define PRINT_T(T) cout << T << endl
/*
 int arr[] 冒泡排序
*/
void Test01()
{
	PRINT_T("===Test01");
	int arr[] = { 1,9,5,7,3,8,2,6,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSortArrayInt(arr, size, 1);
	PrintArrayInt(arr, size);
}

/*
 计算长方体表面积、体积、判断是相等
*/
void Test02()
{
	PRINT_T("===Test02");
	Cube cube1(3, 2, 2), cube2(2, 3, 2);
	float vol = cube1.CalculateVol();
	float sa = cube1.CalculateSa();
	PRINT_T(vol);
	PRINT_T(sa);
	PRINT_T(cube1.IsSameCube(&cube2));
}

/*
 运算符重载
*/
void Test03()
{
	PRINT_T("===Test03");
	Cube cube1(2, 2, 2), cube2(1, 1, 1);
	Cube cube3 = cube1 + cube2; // 本质是 cube1.operator+(cube2);
	PRINT_T(cube3.CalculateVol());
}

/*
 选择排序
*/
void Test04()
{
	PRINT_T("===Test04");
	int arr[] = { 1,9,5,7,3,8,2,6,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	SelectionSortArrayInt(arr, size, 0);
	PrintArrayInt(arr, size);
}


/*
 C++中的继承,多态传参那点事儿 虚函数指针
*/
void Test05()
{
	PRINT_T("==Test05");
	PlayerBaseSoccer sp(1, 15, 1);
	sp.PassBall();
	short age = sp.get_m_age();
	PRINT_T(age);
	ShowYourSelf(sp);

}

/*
 C++中的继承，纯虚函数（类似java中的抽象函数）
*/
void Test06_1()
{
	PRINT_T("==Test06_1");
	KobePlayer kobe(1, 19, 1);
	IversenPlayer iverson(2, 19, 1);
	JorDonPlayer jordon(3, 35, 1);
	ShowYourSelf(kobe);
	ShowPlayerSkills(&kobe);
	ShowYourSelf(iverson);
	ShowPlayerSkills(&iverson);
	ShowYourSelf(jordon);
	ShowPlayerSkills(&jordon);
}

/*
 C++中的继承，纯虚函数（类似java中的抽象函数）
 用堆内存中的实例化进行练习
*/
void Test06_2()
{
	PRINT_T("==Test06_1");
	PlayerBaseBasketball* kobe = new KobePlayer(1, 19, 1);
	PlayerBaseBasketball* iversen = new IversenPlayer(2, 19, 1);
	PlayerBaseBasketball* jordon = new JorDonPlayer(2, 35, 1);
	ShowPlayerSkills(kobe);
	ShowPlayerSkills(iversen);
	ShowPlayerSkills(jordon);
	delete kobe;
	delete iversen;
	delete jordon;
}

/*
  【字符串操作函数】 求字符串长度
*/
void Test07_1()
{
	PRINT_T("===Test07_1");
	const char arr[] = "hello alie";
	PRINT_T(Get_strlen(arr));


	const char arr2[] = { 'I','O' ,'V','E' };
	PRINT_T(Get_strlen(arr2));
	// 综上，strlen以'/0' 作为统计结束的标记，arr2中无'/0';
	// 因此无法结算长度，便会给个随机值
}

/*
  字符串拷贝（全量拷贝）
*/
void Test07_2()
{
	PRINT_T("===Test07_2");
	char arr[] = "hellow";
	//char arr[] = {'h','e','l','l','o','w'};
	char arr2[] = "alie";
	Do_strcpy(arr, arr2);
	int size = sizeof(arr) / sizeof(arr[0]);
	PrintArrayChar(arr, size);
}

/*
  字符串拷贝（按量拷贝）
*/
void Test07_3()
{
	PRINT_T("===Test07_3");
	//char arr[20] = "hello my friend";
	char arr[20] = { '1','2','3','4','5','6' };
	const char* des = "ni hao";
	int lenth = Get_strlen(des) - 1;
	Do_strncpy(arr, des, lenth);
	int count = sizeof(arr) / sizeof(arr[0]);
	PrintArrayChar(arr, count);
}
/*
  字符串追加（全量追加）
*/
void Test07_4()
{
	PRINT_T("===Test07_4");
	char arr[20] = "ni hao";
	const char* p = "alie";
	Do_strcat(arr, p);
	int size = sizeof(arr) / sizeof(arr[0]);
	PrintArrayChar(arr, size);
}
/*
  字符串追加（按量追加）
*/
void Test07_5()
{
	PRINT_T("===Test07_5");
	char arr[20] = "ni hao";
	const char* p = "xixi";
	int lenth = Get_strlen(p);
	PRINT_T(lenth);
	Do_strncat(arr, p, lenth);
	int size = sizeof(arr) / sizeof(arr[0]);
	PrintArrayChar(arr, size);
}
/*
 字符换比较（全量比较）
*/
void Test07_6() 
{
	PRINT_T("===Test07_6");
	const char name1[] = "Tom";
	const char name2[] = "Tom";
	int ret = Do_strcmp(name1,name2);
	PRINT_T(ret);
}

/*
 字符串比较（按量比较）
*/
void Test07_7() 
{
	PRINT_T("===Test07_7");
	const char name1[] = "Tom-Jordan";
	const char name2[] = "Tom-Brain";
	int ret = Do_strncmp(name1, name2, 3);
	PRINT_T(ret);
}
/*
 字符串查找（全量查找）
*/
void Test07_8()
{
	PRINT_T("===Test07_8");
	const char* a = "nihaoma";
	const char* b = "hao";
	char* p_ret = Do_strstr(a, b);
	if (p_ret == NULL)
	{
		PRINT_T("target str not find");
		return;
	}
	PRINT_T(p_ret);
	PRINT_T(p_ret + 1);
	PRINT_T(p_ret + 2);

}
/*
 字符串截取
*/
void Test07_9() 
{
	PRINT_T("===Test07_9");
	char arr[] = "www.aaa.com.cn";
	const char* delim = ".";
	//char* p1 = strtok(arr, delim);
	char* p1 = Do_strtok(arr, delim);
	PRINT_T(p1);
	//char* p2 = strtok(NULL, delim);
	char* p2 = Do_strtok(NULL, delim);
	PRINT_T(p2);
	//char* p3 = strtok(NULL, delim);
	char* p3 = Do_strtok(NULL, delim);
	PRINT_T(p3);
}

/*
  内存拷贝 
*/
void Test08_1() 
{
	PRINT_T("===Test08_01");
	int arr1[] = { 1,2,6,5 };
	int arr2[6] = { 0 };
	Do_memcpy(arr2,arr1,sizeof(arr1));
	PrintArrayInt(arr2, sizeof(arr2) / sizeof(arr2[0]));
	
	PRINT_T("\t");
	struct Student
	{
		char name[20];
		short age;
	};
	struct Student stu1 = { "zhangsan",15 };
	struct Student stu2 = {};
	Do_memcpy(&stu2, &stu1, sizeof(stu1));
	PRINT_T(stu2.age);
	PrintArrayChar(stu2.name,sizeof(stu2.name)/sizeof(stu2.name[0]));
}

/*
 内存拷贝，处理内存重叠的情况
*/
void Test08_2()
{
	PRINT_T("===Test08_02");
	int arr[] = { 1,2,3,4,5,6,7 };
	// 这里我们拷贝4个元素的总字节数（16个字节）
	Do_memmove(arr + 2, arr, sizeof(int) * 4); 
	PrintArrayInt(arr, sizeof(arr) / sizeof(arr[0]));
}

/*
  内存比较
*/
void Test08_3() 
{
	PRINT_T("===Test08_03");
	struct Teacher
	{
		char name[20];
		short age;
	};
	Teacher teacher1 = {"张三",15};
	Teacher teacher2 = { "张三",14 };
	int ret = Do_memcmp(&teacher1, &teacher2, sizeof(teacher1));
	PRINT_T(ret);
}

/*
  内存设置 
*/
void Test08_4() 
{
	PRINT_T("===Test08_4");
	char arr[] = "nihao";
	Do_memset(arr,'h',5);
	PrintArrayChar(arr, sizeof(arr) / sizeof(arr[0]));

	PRINT_T("\t");
	int arr1[] = { 1,2,3,4,5};
	Do_memset(arr1, 'c', 20);
	PrintArrayInt(arr1, sizeof(arr1) / sizeof(arr1[0]));
}
int main()
{
	PRINT_T("===main()");
	//Test01();
	//Test02();
	//Test03();
	//Test04();
	//Test05();
	//Test06_1(); // C++中的继承，纯虚函数（类似java中的抽象函数）
	//Test06_2(); // C++中的继承，纯虚函数（类似java中的抽象函数）,用堆内存中的实例化进行练习
	//Test07_1(); //【字符串操作函数】 字符串长度
	//Test07_2(); //【字符串操作函数】 字符串拷贝（全量拷贝+'\0'） 
	//Test07_3(); //【字符串操作函数】 字符串拷贝（按量拷贝）
	//Test07_4(); //【字符串操作函数】 字符串追加（全量追加+'\0'）
	//Test07_5(); //【字符串操作函数】 字符串追加（按量追加）
	//Test07_6(); //【字符串操作函数】 字符串比较 (按量比较)
	//Test07_7(); //【字符串操作函数】 字符串比较 (全量比较)
	//Test07_8(); //【字符串操作函数】 字符串查找 (全量查找)
	//Test07_9(); //【字符串操作函数】 字符串截取
	//Test08_1(); //【内存操作函数】memcpy 
	//Test08_2(); //【内存操作函数】memmove
	//Test08_3(); // 【内存操作函数】memcmp
	Test08_4(); // 【内存操作函数】memset
	return 1;
}