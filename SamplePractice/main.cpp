#define _CRT_SECURE_NO_WARNINGS 1
extern "C" {
#include "demo_sort/base_sort.h"
#include "demo_lib_operate/lib_operate_str/operate_string_method.h"
#include "demo_lib_operate/lib_operate_mem/operate_mem_method.h"
#include "demo_lib_operate/lib_operate_mem_heap/operate_mem_heap_method.h"
}
#include <iostream>
#include "demo_print/base_print.h"
#include "demo_geometry/Cube.h"
#include "demo_player/bean/player_base_soccer.h"
#include "demo_player/player_method.h"
#include "demo_computer_components/component_work_method.h"
#include "demo_file_operate/order_file_operate.h"
#include "demo_templet_self/bean/student.hpp"
#include "demo_templet_self/bean/teacher.hpp"
#include "demo_lib_operate/lib_operate_stl/operate_stl_vector.h"
#include "demo_lib_operate/lib_operate_stl/operate_stl_deque.h"
#include "demo_lib_operate/lib_operate_stl/operate_stl_list.h"
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
	PlayerBaseSoccer sp("soccker", 15, 1);
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
	KobePlayer kobe("KOBE", 19, 1);
	IversenPlayer iverson("IVERSON", 19, 1);
	JorDonPlayer jordon("JORDON", 35, 1);
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
	PlayerBaseBasketball* kobe = new KobePlayer("KOBE", 19, 1);
	PlayerBaseBasketball* iversen = new IversenPlayer("IVERSON", 19, 1);
	PlayerBaseBasketball* jordon = new JorDonPlayer("JORDON", 35, 1);
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
	int ret = Do_strcmp(name1, name2);
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
	Do_memcpy(arr2, arr1, sizeof(arr1));
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
	PrintArrayChar(stu2.name, sizeof(stu2.name) / sizeof(stu2.name[0]));
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
	Teacher teacher1 = { "张三",15 };
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
	Do_memset(arr, 'h', 5);
	PrintArrayChar(arr, sizeof(arr) / sizeof(arr[0]));

	PRINT_T("\t");
	int arr1[] = { 1,2,3,4,5 };
	Do_memset(arr1, 'c', 20);
	PrintArrayInt(arr1, sizeof(arr1) / sizeof(arr1[0]));

}
/*
  组装电脑
*/
void Test09()
{
	PRINT_T("===Test09");
	ComputerBase* c_alien = new ComputerAlienware(
		"外星人电脑",
		"外星人电脑",
		new CpuAlienware("外星人CPU", "外星人CPU"),
		new GpuAlienware("外星人GPI", "外星人GPU"),
		new MemoryBankAlienware("外星人内存条", "外星人内存条"));
	DoPlayGames(c_alien);
	delete c_alien;
	c_alien = NULL;
	PRINT_T("===\t");

	ComputerBase* c_dell = new ComputerDell(
		"戴尔电脑",
		"戴尔电脑",
		new CpuDell("戴尔CPU", "戴尔CPU"),
		new GpuDell("戴尔GPI", "戴尔GPU"),
		new MemoryBankDell("戴尔内存条", "戴尔内存条")
	);
	DoPlayGames(c_dell);
	delete c_dell;
	c_dell = NULL;

	PRINT_T("=== \t");
	ComputerDiy* c_diy = new ComputerDiy
	(
		"组装电脑",
		"组装电脑",
		new CpuDell("戴尔CPU", "戴尔CPU"),
		new GpuAlienware("外星人GPI", "外星人GPU"),
		new MemoryBankLenovo("联想内存条", "联想内存条")
	);
	DoPlayGames(c_diy);
	delete c_diy;
	c_diy = NULL;
}

/*
 写文件 【写文本到外部文件】
*/
void Test10_0()
{
	PRINT_T("===Test10_0");
	Order* p_order = new Order("游戏机", "2021-02-15", 20000);
	WriteTextToFile(FILE_ORDER_PATH, p_order);
	delete p_order;
	p_order = NULL;
}
/*
  读文件 【读取文本到内存】
*/
void Test10_1()
{
	PRINT_T("===Test10_1");
	//ReadTextFromFile1(FILE_ORDER_PATH); // 第1种 ifs >> buffer
	//ReadTextFromFile2(FILE_ORDER_PATH); // 第2种 ifs.getline(buffer,sizeof(buffer))
	//ReadTextFromFile3(FILE_ORDER_PATH); // 第3种 getline(ifs,buffer)   buffer 是 string类型
	ReadTextFromFile4(FILE_ORDER_PATH); // 第4种 (c = ifs.get()) != EOF （这尼玛是一个字节一个字节读取）
}

/*
 写文件 【写二进制到外部文件】
*/
void Test10_2()
{
	PRINT_T("===Test10_2");
	Order* order = new Order("BloodXX", "2021-02-15", 76);
	WriteBinaryToFile(FILE_ORDER_PATH_BINARY, order);
	delete order;
	order = NULL;
}
/*
 读文件 【读二进制到内存中（对象中）】
*/
void Test10_3()
{
	PRINT_T("===Test10_3");
	Order order;
	ReadBinaryFromFile(FILE_ORDER_PATH_BINARY, &order);
	PRINT_T(order.get_m_name());
	PRINT_T(order.get_m_date());
	PRINT_T(order.get_m_price());
}

/*
  内存操作函数使用
*/
void Test11()
{
	PRINT_T("===Test11");
	Do_malloc(5 * sizeof(int));
	Do_calloc(5, sizeof(int));

	//===============================
	const int count = 5;
	int size = count * sizeof(int);
	int *p = (int*)malloc(size);
	for (size_t i = 0; i < size; i++)
	{
		p[i] = i * 10;
	}
	Do_realloc(p, size * 2);

}

//*******************模板相关开始****************************

//===================模板方法开始
void Swap(int* a, int *b)
{
	PRINT_T("===Swap 普通方法");
	int temp = *a;
	*a = *b;
	*b = temp;
}

template <class T>
void Swap(T* a, T* b)
{
	PRINT_T("===Swap 模板方法");
	T temp = *a;
	*a = *b;
	*b = temp;
}

template <class T>
T* Compare(T* t1, T* t2)
{
	PRINT_T("===Compare 模板方法");
	return *t1 > *t2 ? t1 : t2;
}

// 特定类型具体化操作
template <>
PlayerBase* Compare(PlayerBase* p1, PlayerBase* p2)
{
	return p1->get_m_age() > p2->get_m_age() ? p1 : p2;
}
//===================模板方法结束

//===================模板类开始
template <class T, class V>
class Person
{
private:
	T t;
	V v;
public:
	~Person() {}
	Person() {}
	Person(T t, V v)
	{
		this->t = t;
		this->v = v;
	}
	//template <class T>
	//void set_t(T, t) 
	//{
	//	this->t = t;
	//}
	//template <class V>
	//void set_v(V, v) 
	//{
	//	this->v = v;
	//}


	//template<class T> T get_t() 
	//{
	//	return this->t;
	//}
	//template<class V> V get_v() 
	//{
	//	return this->v;
	//}

	void ShowInfo()
	{
		PRINT_T(this->t);
		PRINT_T(this->v);
	}
};

// 模板类传参开始
void DoShowPersonInfo(Person<string, short> &p)
{
	p.ShowInfo();
}

void DoShowPersonInfo(Person<string, short> *p)
{
	p->ShowInfo();
}
template <class T1, class T2>
void DoShowPersonInfo(Person<T1, T2> *p)
{
	p->ShowInfo();
}

// 模板类传参结束
//===================模板类结束
//*******************模板相关结束****************************


/*
 模板方法part1
 模板方法 普通方法 同名同参时，优先调用普通方法
*/
void Test12_1()
{
	PRINT_T("===Test12_1");
	int a = 33;
	int b = 56;
	Swap(&a, &b);
	PRINT_T(a);
	PRINT_T(b);
}

/*
 模板方法part2
 模板方法 泛型优势
*/
void Test12_2()
{
	PRINT_T("===Test12_2");
	float a = 15;
	float b = 95;
	Swap<float>(&a, &b);
	//Swap(&a, &b);
	PRINT_T(a);
	PRINT_T(b);
}

/*
 模板方法part3
 模板方法 比较一下
*/
void Test12_3()
{
	PRINT_T("===Test12_3");
	float a = 16;
	float b = 29;
	float* x = Compare<float>(&a, &b);
	PRINT_T(*x);
}
/*
 模板方法part4
 特定类型具体化操作
*/
void Test12_4()
{
	PRINT_T("===Test12_4");
	PlayerBase* p_kobe = new KobePlayer("KOBE", 19, '0');
	PlayerBase* p_jordon = new JorDonPlayer("JORDON", 35, '0');
	PlayerBase* px = Compare<PlayerBase>(p_kobe, p_jordon);
	PRINT_T(px->get_m_name());

	delete p_kobe;
	p_kobe = NULL;
	delete p_jordon;
	p_jordon = NULL;

}

/*
 模板类part1
*/
void Test12_5()
{
	PRINT_T("===Test12_5");
	Person<string, short> person1("李宁", 25);
	Person<string, short> person2("李小双", 20);
	Person<string, short> *p_person1 = new Person<string, short>("李宁", 20);
	Person<string, int> *p_person2 = new Person<string, int>("李小双", 15);
	person1.ShowInfo();
	person2.ShowInfo();

	delete p_person1;
	delete p_person2;
}
/*
 模板类part2
*/
void Test12_6()
{
	PRINT_T("===Test12_6");
	Person<string, short> p1("赵本山", 25);
	Person<string, int> p2("陈佩斯", 30);
	DoShowPersonInfo(p1);
	DoShowPersonInfo(&p2);
}

/*
 模板类part3
 .h .c ---> .hpp 
 合并实现
*/
void Test12_7() 
{
	PRINT_T("===Test12_6");
	Student<string, short> * stu1 = new Student<string, short>("扁鹊",55);
	stu1->ShowInfo();
	
	Student<string, short> * stu2 = new Student<string, short>("华佗", 40);
	stu2->ShowInfo();
	
	Student<string, short> * stu3 = new Student<string, short>("孙思邈",35);
	stu3->ShowInfo();

	Student<string, short> * stu4 = new Student<string, short>("张仲景",20);
	stu4->ShowInfo();


	delete stu1;
	stu1 = NULL;

	delete stu2;
	stu2 = NULL;
	
	delete stu3;
	stu3 = NULL;
	
	delete stu4;
	stu4 = NULL;
}

/*
 模板类part4
 在普通类中加入模板方法
*/
void Test12_8() 
{
	PRINT_T("===Test12_8");
	Teacher * teacher = new Teacher("张仲景", 55);
	teacher->ShowInfo();
	teacher->ShowToPlay<string,short>("金匮要略",1500);
	delete teacher;
}

/*
 stl vector的简单使用 
*/
void Test13_1() 
{
	PRINT_T("===Test13_1");
	GenerateVectorIntDataAndShow();
}

/*
 stl vector 基本类型的增删改查
*/
void Test13_2() 
{
	PRINT_T("===Test13_2");
	vector<int> *p_vector = new vector<int>();


	// 增
	AddDataVector(p_vector, 11);
	AddDataVector(p_vector, 22);
	AddDataVector(p_vector, 33);
	AddDataVector(p_vector, 44);
	AddDataVector(p_vector, 55);
	// 删
	DelDataVector(p_vector, 55);
	// 改
	UpdateDataVector(p_vector, 333, 2);
	// 查
	ShowDataVector(p_vector);
	delete p_vector;
}

/*
 stl vector 自定义数据类型增删改查
*/
void Test13_3() 
{
	PRINT_T("===Test13_3");
	vector<Menu*> * p_menus = new vector<Menu*>();
	Menu* menu1 = new Menu("白菜","翡翠白菜",15);
	Menu* menu2 = new Menu("电脑", "二手电脑", 500);
	Menu* menu3 = new Menu("报纸","废旧报纸",6);
	Menu* menu4 = new Menu("木板","梨花木木板",100);
	Menu* menu5 = new Menu("稀饭","8宝稀饭",3);
	Menu* menu6 = new Menu("汉堡", "鸡肉汉堡", 20);


	AddDataMenuVector(p_menus, menu1);
	AddDataMenuVector(p_menus, menu2);
	AddDataMenuVector(p_menus, menu3);
	AddDataMenuVector(p_menus, menu4);
	AddDataMenuVector(p_menus, menu5);

	DelDataMenuVector(p_menus, "木板");
	UpdateDataMenuVector(p_menus, "稀饭","醪糟南瓜稀饭");
	ShowDataMenuVector(p_menus);
	InsertDataMenuVector(p_menus, menu6, 3);
	PRINT_T("===After insert");
	ShowDataMenuVector2(p_menus);
	//ShowDataMenuVector3(p_menus);
	delete menu1;
	delete menu2;
	delete menu3;
	delete menu4;
	delete menu5;
	delete menu6;
	delete p_menus;
}

/*
 双端队列练习
*/
void Test14()  
{
	PRINT_T("===Test14");
	int arr[] = { 1,8,2,4,6,9,5,7,3 };
	int count = sizeof(arr) / sizeof(arr[0]);
	deque<int>* p_deque = new deque<int>();

	for (size_t i = 0; i < count; i++)
	{
		AddDataDeque(p_deque,arr[i]);
	}

	ShowDataDeque(p_deque);

	delete p_deque;
	p_deque = NULL;

}

/*
 双向链表练习
*/
void Test15() 
{
	PRINT_T("===Test15");
	Menu* menu1 = new Menu("苹果","洛川苹果",10);
	Menu* menu2 = new Menu("桃子", "北京桃子", 20);
	Menu* menu3 = new Menu("石榴","临潼石榴",30);
	Menu* menu4 = new Menu("柿子", "山西柿子",40);
	Menu* menu5 = new Menu("李子","广东李子",50);
	list<Menu*>* p_list = new list<Menu*> ();
	AddDataMenuList(p_list, menu1);
	AddDataMenuList(p_list, menu2);
	AddDataMenuList(p_list, menu3);
	AddDataMenuList(p_list, menu4);
	AddDataMenuList(p_list, menu5);

	ShowDataMenuList(p_list);
	
	delete p_list;
	delete menu1;
	delete menu2;
	delete menu3;
	delete menu4;
	delete menu5;
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
	//Test08_3(); //【内存操作函数】memcmp
	//Test08_4(); //【内存操作函数】memset
	//Test09();   //【组装电脑练习】
	//Test10_0(); //【文件写】文本写到外部磁盘
	//Test10_1(); //【文件读】文本读到内存
	//Test10_2(); //【二进制写】二进制数据写到外部磁盘
	//Test10_3(); //【二进制读】二进制数据去取到内存对象中
	//Test11();   //【内存函数】malloc calloc realloc 练习
	//Test12_1(); //【模板方法】相同方法签名（伪签名）优先调用普通方法
	//Test12_2(); //【模板方法】泛型优势
	//Test12_3(); //【模板方法】练习一下
	//Test12_4(); //【模板方法】特定类型具体化操作
	//Test12_5(); //【模板类】part1
	//Test12_6(); //【模板类】传参
	//Test12_7(); //【模板类】.h .cpp --->.hpp
	//Test12_8(); //【类模板】普通类中加入模板方法
	//Test13_1(); //【stl vector】最简单的使用
	//Test13_2(); //【stl vector】基本类型 增删改查
	//Test13_3(); //【stl vector】自定义类型 增删改查
	//Test14(); //【stl deque】双端队列
	Test15();//【stl list】双向链表 （在c++中list容器代表的是双向链表）
	return 1;

}