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
#include "demo_lib_operate/lib_operate_stl/operate_stl_set.h"
#include "demo_lib_operate/lib_operate_stl/operate_stl_map.h"
#include "demo_lib_operate/lib_operate_stl/operate_stl_algorithm.h"
#include "demo_common_review/bean/apple.h"
#include "demo_common_review/bean/peach.h"
#include "demo_common_review/bean/bananaImmortal.h"
using namespace std;
#define PRINT_T(T) cout << T << endl

/*
 int arr[] ð������
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
 ���㳤����������������ж������
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
 ���������
*/
void Test03()
{
	PRINT_T("===Test03");
	Cube cube1(2, 2, 2), cube2(1, 1, 1);
	Cube cube3 = cube1 + cube2; // ������ cube1.operator+(cube2);
	PRINT_T(cube3.CalculateVol());
}

/*
 ѡ������
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
 C++�еļ̳�,��̬�����ǵ��¶� �麯��ָ��
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
 C++�еļ̳У����麯��������java�еĳ�������
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
 C++�еļ̳У����麯��������java�еĳ�������
 �ö��ڴ��е�ʵ����������ϰ
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
  ���ַ������������� ���ַ�������
*/
void Test07_1()
{
	PRINT_T("===Test07_1");
	const char arr[] = "hello alie";
	PRINT_T(Get_strlen(arr));


	const char arr2[] = { 'I','O' ,'V','E' };
	PRINT_T(Get_strlen(arr2));
	// ���ϣ�strlen��'/0' ��Ϊͳ�ƽ����ı�ǣ�arr2����'/0';
	// ����޷����㳤�ȣ����������ֵ
}

/*
  �ַ���������ȫ��������
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
  �ַ�������������������
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
  �ַ���׷�ӣ�ȫ��׷�ӣ�
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
  �ַ���׷�ӣ�����׷�ӣ�
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
 �ַ����Ƚϣ�ȫ���Ƚϣ�
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
 �ַ����Ƚϣ������Ƚϣ�
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
 �ַ������ң�ȫ�����ң�
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
 �ַ�����ȡ
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
  �ڴ濽��
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
 �ڴ濽���������ڴ��ص������
*/
void Test08_2()
{
	PRINT_T("===Test08_02");
	int arr[] = { 1,2,3,4,5,6,7 };
	// �������ǿ���4��Ԫ�ص����ֽ�����16���ֽڣ�
	Do_memmove(arr + 2, arr, sizeof(int) * 4);
	PrintArrayInt(arr, sizeof(arr) / sizeof(arr[0]));
}

/*
  �ڴ�Ƚ�
*/
void Test08_3()
{
	PRINT_T("===Test08_03");
	struct Teacher
	{
		char name[20];
		short age;
	};
	Teacher teacher1 = { "����",15 };
	Teacher teacher2 = { "����",14 };
	int ret = Do_memcmp(&teacher1, &teacher2, sizeof(teacher1));
	PRINT_T(ret);
}

/*
  �ڴ�����
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
  ��װ����
*/
void Test09()
{
	PRINT_T("===Test09");
	ComputerBase* c_alien = new ComputerAlienware(
		"�����˵���",
		"�����˵���",
		new CpuAlienware("������CPU", "������CPU"),
		new GpuAlienware("������GPI", "������GPU"),
		new MemoryBankAlienware("�������ڴ���", "�������ڴ���"));
	DoPlayGames(c_alien);
	delete c_alien;
	c_alien = NULL;
	PRINT_T("===\t");

	ComputerBase* c_dell = new ComputerDell(
		"��������",
		"��������",
		new CpuDell("����CPU", "����CPU"),
		new GpuDell("����GPI", "����GPU"),
		new MemoryBankDell("�����ڴ���", "�����ڴ���")
	);
	DoPlayGames(c_dell);
	delete c_dell;
	c_dell = NULL;

	PRINT_T("=== \t");
	ComputerDiy* c_diy = new ComputerDiy
	(
		"��װ����",
		"��װ����",
		new CpuDell("����CPU", "����CPU"),
		new GpuAlienware("������GPI", "������GPU"),
		new MemoryBankLenovo("�����ڴ���", "�����ڴ���")
	);
	DoPlayGames(c_diy);
	delete c_diy;
	c_diy = NULL;
}

/*
 д�ļ� ��д�ı����ⲿ�ļ���
*/
void Test10_0()
{
	PRINT_T("===Test10_0");
	Order* p_order = new Order("��Ϸ��", "2021-02-15", 20000);
	WriteTextToFile(FILE_ORDER_PATH, p_order);
	delete p_order;
	p_order = NULL;
}

/*
  ���ļ� ����ȡ�ı����ڴ桿
*/
void Test10_1()
{
	PRINT_T("===Test10_1");
	//ReadTextFromFile1(FILE_ORDER_PATH); // ��1�� ifs >> buffer
	//ReadTextFromFile2(FILE_ORDER_PATH); // ��2�� ifs.getline(buffer,sizeof(buffer))
	//ReadTextFromFile3(FILE_ORDER_PATH); // ��3�� getline(ifs,buffer)   buffer �� string����
	ReadTextFromFile4(FILE_ORDER_PATH); // ��4�� (c = ifs.get()) != EOF ����������һ���ֽ�һ���ֽڶ�ȡ��
}

/*
 д�ļ� ��д�����Ƶ��ⲿ�ļ���
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
 ���ļ� ���������Ƶ��ڴ��У������У���
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
  �ڴ��������ʹ��
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

//*******************ģ����ؿ�ʼ****************************

//===================ģ�巽����ʼ
void Swap(int* a, int *b)
{
	PRINT_T("===Swap ��ͨ����");
	int temp = *a;
	*a = *b;
	*b = temp;
}

template <class T>
void Swap(T* a, T* b)
{
	PRINT_T("===Swap ģ�巽��");
	T temp = *a;
	*a = *b;
	*b = temp;
}

template <class T>
T* Compare(T* t1, T* t2)
{
	PRINT_T("===Compare ģ�巽��");
	return *t1 > *t2 ? t1 : t2;
}

// �ض����;��廯����
template <>
PlayerBase* Compare(PlayerBase* p1, PlayerBase* p2)
{
	return p1->get_m_age() > p2->get_m_age() ? p1 : p2;
}
//===================ģ�巽������

//===================ģ���࿪ʼ
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

// ģ���ഫ�ο�ʼ
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

// ģ���ഫ�ν���
//===================ģ�������
//*******************ģ����ؽ���****************************


/*
 ģ�巽��part1
 ģ�巽�� ��ͨ���� ͬ��ͬ��ʱ�����ȵ�����ͨ����
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
 ģ�巽��part2
 ģ�巽�� ��������
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
 ģ�巽��part3
 ģ�巽�� �Ƚ�һ��
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
 ģ�巽��part4
 �ض����;��廯����
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
 ģ����part1
*/
void Test12_5()
{
	PRINT_T("===Test12_5");
	Person<string, short> person1("����", 25);
	Person<string, short> person2("��С˫", 20);
	Person<string, short> *p_person1 = new Person<string, short>("����", 20);
	Person<string, int> *p_person2 = new Person<string, int>("��С˫", 15);
	person1.ShowInfo();
	person2.ShowInfo();

	delete p_person1;
	delete p_person2;
}

/*
 ģ����part2
*/
void Test12_6()
{
	PRINT_T("===Test12_6");
	Person<string, short> p1("�Ա�ɽ", 25);
	Person<string, int> p2("����˹", 30);
	DoShowPersonInfo(p1);
	DoShowPersonInfo(&p2);
}

/*
 ģ����part3
 .h .c ---> .hpp
 �ϲ�ʵ��
*/
void Test12_7()
{
	PRINT_T("===Test12_6");
	Student<string, short> * stu1 = new Student<string, short>("��ȵ", 55);
	stu1->ShowInfo();

	Student<string, short> * stu2 = new Student<string, short>("��٢", 40);
	stu2->ShowInfo();

	Student<string, short> * stu3 = new Student<string, short>("��˼��", 35);
	stu3->ShowInfo();

	Student<string, short> * stu4 = new Student<string, short>("���پ�", 20);
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
 ģ����part4
 ����ͨ���м���ģ�巽��
*/
void Test12_8()
{
	PRINT_T("===Test12_8");
	Teacher * teacher = new Teacher("���پ�", 55);
	teacher->ShowInfo();
	teacher->ShowToPlay<string, short>("����Ҫ��", 1500);
	delete teacher;
}

/*
 stl vector�ļ�ʹ��
*/
void Test13_1()
{
	PRINT_T("===Test13_1");
	GenerateVectorIntDataAndShow();
}

/*
 stl vector �������͵���ɾ�Ĳ�
*/
void Test13_2()
{
	PRINT_T("===Test13_2");
	vector<int> *p_vector = new vector<int>();


	// ��
	AddDataVector(p_vector, 11);
	AddDataVector(p_vector, 22);
	AddDataVector(p_vector, 33);
	AddDataVector(p_vector, 44);
	AddDataVector(p_vector, 55);
	// ɾ
	DelDataVector(p_vector, 55);
	// ��
	UpdateDataVector(p_vector, 333, 2);
	// ��
	ShowDataVector(p_vector);
	delete p_vector;
}

/*
 stl vector �Զ�������������ɾ�Ĳ�
*/
void Test13_3()
{
	PRINT_T("===Test13_3");
	vector<Menu*> * p_menus = new vector<Menu*>();
	Menu* menu1 = new Menu("�ײ�", "���ײ�", 15);
	Menu* menu2 = new Menu("����", "���ֵ���", 500);
	Menu* menu3 = new Menu("��ֽ", "�Ͼɱ�ֽ", 6);
	Menu* menu4 = new Menu("ľ��", "�滨ľľ��", 100);
	Menu* menu5 = new Menu("ϡ��", "8��ϡ��", 3);
	Menu* menu6 = new Menu("����", "���⺺��", 20);


	AddDataMenuVector(p_menus, menu1);
	AddDataMenuVector(p_menus, menu2);
	AddDataMenuVector(p_menus, menu3);
	AddDataMenuVector(p_menus, menu4);
	AddDataMenuVector(p_menus, menu5);

	DelDataMenuVector(p_menus, "ľ��");
	UpdateDataMenuVector(p_menus, "ϡ��", "�����Ϲ�ϡ��");
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
 ˫�˶�����ϰ
*/
void Test14()
{
	PRINT_T("===Test14");
	int arr[] = { 1,8,2,4,6,9,5,7,3 };
	int count = sizeof(arr) / sizeof(arr[0]);
	deque<int>* p_deque = new deque<int>();

	for (size_t i = 0; i < count; i++)
	{
		AddDataDeque(p_deque, arr[i]);
	}

	ShowDataDeque(p_deque);

	delete p_deque;
	p_deque = NULL;

}

/*
 �������ǾͰ��ղ˵��۸�������
 �˵��۸�Ƚϵķ���,����list.sort�ķ����еıȽϻص�
*/
bool CompareMenu(Menu* p_menu1, Menu* p_menu2)
{
	return p_menu1->get_m_price() < p_menu2->get_m_price();
}

/*
 ˫��������ϰ
*/
void Test15()
{
	PRINT_T("===Test15");
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("ʯ��", "����ʯ��", 30);
	Menu* menu4 = new Menu("����", "ɽ������", 40);
	Menu* menu5 = new Menu("����", "�㶫����", 50);
	list<Menu*>* p_list = new list<Menu*>();
	AddDataMenuList(p_list, menu1);
	AddDataMenuList(p_list, menu2);
	AddDataMenuList(p_list, menu3);
	AddDataMenuList(p_list, menu4);
	AddDataMenuList(p_list, menu5);

	ShowDataMenuList(p_list);
	ReverseDataMenuList(p_list);
	ShowDataMenuList(p_list);
	PRINT_T("===let's sort");

	p_list->sort(CompareMenu); // ����
	ShowDataMenuList(p_list);

	delete p_list;
	p_list = NULL;
	delete menu1;
	menu1 = NULL;
	delete menu2;
	menu2 = NULL;
	delete menu3;
	menu3 = NULL;
	delete menu4;
	menu4 = NULL;
	delete menu5;
	menu5 = NULL;
}

/*
 set������ϰ��c++��set�������ݲ��ظ��������Զ�����
*/
void Test16()
{
	PRINT_T("===Test16");
	set<int>* p_set = new set<int>();
	InsertDataSet(p_set, 5);
	InsertDataSet(p_set, 2);
	InsertDataSet(p_set, 8);
	InsertDataSet(p_set, 4);
	InsertDataSet(p_set, 1);

	ShowDataSet(p_set);

	int testCount = 2;
	set<int> ::iterator p_value = FindDataSet(p_set, testCount);
	if (p_value == p_set->end())
	{
		PRINT_T("δ�ҵ�����:");
	}
	else
	{
		PRINT_T("���ҵ�����:");
	}
	delete p_set;
}

/*
 map������ϰ
*/
void Test17()
{
	PRINT_T("===Test17");
	map<string*, Menu*>* p_map = new map<string*, Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);

	string key_a = "ˮ��";
	string key_b = "�߲�";
	string key_c = "����";
	string key_d = "����";
	InsertDataMenuMap(p_map, &key_a, menu1);
	InsertDataMenuMap(p_map, &key_a, menu2);
	InsertDataMenuMap(p_map, &key_b, menu3);
	InsertDataMenuMap(p_map, &key_c, menu4);
	InsertDataMenuMap(p_map, &key_d, menu5);
	ShowDataMenuMap(p_map);

	PRINT_T("===ɾ��");
	DeletDataMenuMap(p_map, &key_c);
	ShowDataMenuMap(p_map);

	PRINT_T("===����");
	UpdateDataMenuMap(p_map, &key_a, menu2);
	ShowDataMenuMap(p_map);

	PRINT_T("===ɾ��");
	DeletDataMenuMap(p_map, &key_d);
	ShowDataMenuMap(p_map);

	delete p_map;
	p_map = NULL;
	delete menu1;
	menu1 = NULL;
	delete menu2;
	menu2 = NULL;
	delete menu3;
	menu3 = NULL;
	delete menu4;
	menu4 = NULL;
	delete menu5;
	menu5 = NULL;


}


/*
  **************************algorithm�㷨�����ϰ ��ʼ**************************
*/

/*
 �º��� ����Ϊָ��
*/
class FunObjForEachArgsPointer
{
public:
	void operator()(Menu* p_menu)
	{
		p_menu->ShowInfo();
	}
};

class FunElementShort
{
public:
	void operator()(short element)
	{
		PRINT_T(element);
	}
};

/*
 �º��� ����Ϊ����
*/
class FunObjForEachArgsObj
{
public:
	void operator()(Menu menu)
	{
		menu.ShowInfo();
	}
};

/*
 �º��� ת��ʱ��ʹ��
*/
class FunObjTransform
{
public:
	Menu* operator()(Menu* p_menu)
	{
		return p_menu;
	}
};


//�º��� ν��
class FunObjFindIf
{
private:
	string m_name;
public:
	FunObjFindIf(string name)
	{
		this->m_name = name;
	}

	bool operator()(Menu* p_menu)
	{
		return this->m_name == p_menu->get_m_name();
	}
};

//�º��� ν��,���������Ҽ۸�
class FunFindPrice
{
private:
	short m_condition;


public:
	FunFindPrice(short condition)
	{
		this->m_condition = condition;
	}
	bool operator()(Menu* p_menu)
	{
		return p_menu->get_m_price() == this->m_condition;
	}
};

//�º��� ν��,������������߽���
class FunSort
{

private:
	char m_tag;
public:
	FunSort(char tag)
	{
		this->m_tag = tag;
	}
	bool operator()(Menu* p_m1, Menu* p_m2)
	{

		bool ret;
		if (m_tag == 1) // ����
		{
			ret = p_m1->get_m_price() < p_m2->get_m_price();
		}
		else
		{
			ret = p_m1->get_m_price() > p_m2->get_m_price();
		}
		return ret;
	}
};

class FunReplaceByCondition
{
private:
	float m_price_condition;
public:
	FunReplaceByCondition(float price)
	{
		this->m_price_condition = price;
	}

	bool operator()(Menu* p_menu)
	{
		return 	p_menu->get_m_price() == m_price_condition;
	}
};

/*
 for_each ������ϰ
*/
void Test18_1()
{
	PRINT_T("===Test18_1");
	vector<Menu*>* p_vector = new vector<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);

	AddAlogrithmDatas(p_vector, menu1);
	AddAlogrithmDatas(p_vector, menu2);
	AddAlogrithmDatas(p_vector, menu3);
	AddAlogrithmDatas(p_vector, menu4);
	AddAlogrithmDatas(p_vector, menu5);

	// ��һ�֣�for_each ������ͨ����
	PRINT_T("��һ�֣�for_each ����º���");
	for_each(p_vector->begin(), p_vector->end(), FunObjForEachArgsPointer());

	// �ڶ��֣�for_each ����º���
	//PRINT_T("��һ�֣�for_each ������ͨ����");
	//for_each(p_vector->begin(), p_vector->end(), FunObj());

	delete p_vector;
	p_vector = NULL;
	delete menu1;
	menu1 = NULL;
	delete menu2;
	menu2 = NULL;
	delete menu3;
	menu3 = NULL;
	delete menu4;
	menu4 = NULL;
	delete menu5;
	menu5 = NULL;
}

/*
 transform ���˴���
*/
void Test18_2()
{
	PRINT_T("===Test18_2");
	vector<Menu*>* p_vector = new vector<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);

	AddAlogrithmDatas(p_vector, menu1);
	AddAlogrithmDatas(p_vector, menu2);
	AddAlogrithmDatas(p_vector, menu3);
	AddAlogrithmDatas(p_vector, menu4);
	AddAlogrithmDatas(p_vector, menu5);


	vector<Menu*>* p_vector2 = new vector<Menu*>();
	p_vector2->resize(p_vector->size()); // ����һ��ҪԤ���ռ�
	transform(p_vector->begin(), p_vector->end(), p_vector2->begin(), FunObjTransform()); // ����ķº���Ҫ��������

	PRINT_T("===��ӡp_vector2 �е�����");
	for_each(p_vector2->begin(), p_vector2->end(), FunObjForEachArgsPointer());

	delete p_vector;
	p_vector = NULL;

	delete p_vector2;
	p_vector2 = NULL;
	delete menu1;
	menu1 = NULL;
	delete menu2;
	menu2 = NULL;
	delete menu3;
	menu3 = NULL;
	delete menu4;
	menu4 = NULL;
	delete menu5;
	menu5 = NULL;
}

/*
 find�÷�
*/
void Test18_3()
{
	PRINT_T("===Test18_3");
	deque<Menu>* p_deque = new deque<Menu>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);

	p_deque->push_back(*menu1);
	p_deque->push_back(*menu2);
	p_deque->push_back(*menu3);
	p_deque->push_back(*menu4);
	p_deque->push_back(*menu5);

	PRINT_T("===����ȫ����ӡ");
	for_each(p_deque->begin(), p_deque->end(), FunObjForEachArgsObj());

	// �������Ҫ���������һ��


	deque<Menu>::iterator p_iterator = find(p_deque->begin(), p_deque->end(), "����");// ������Ҫ��д������
	if (p_iterator != p_deque->end())
	{
		PRINT_T("�������ҵ��ˡ�����");
		p_iterator->ShowInfo();
	}
	else
	{
		PRINT_T("δ�ҵ�����");
	}

	delete p_deque;
	p_deque = NULL;
	delete menu1;
	menu1 = NULL;
	delete menu2;
	menu2 = NULL;
	delete menu3;
	menu3 = NULL;
	delete menu4;
	menu4 = NULL;
	delete menu5;
	menu5 = NULL;
}

/*
 find_if �÷� �����˾��� better than find����Ϊ��Ϊ������Դ���ν�ʣ�
*/
void Test18_4()
{
	PRINT_T("===Test18_4");
	list<Menu*>* p_list = new list<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);

	AddAlogrithmDatas(p_list, menu1);
	AddAlogrithmDatas(p_list, menu2);
	AddAlogrithmDatas(p_list, menu3);
	AddAlogrithmDatas(p_list, menu4);
	AddAlogrithmDatas(p_list, menu5);

	for_each(p_list->begin(), p_list->end(), FunObjForEachArgsPointer());
	PRINT_T("=== ��ʼfind_if");
	string keyWord = "ţ��";

	list<Menu*>::iterator p_it = find_if(p_list->begin(), p_list->end(), FunObjFindIf(keyWord));
	if (p_it == p_list->end())
	{
		PRINT_T("δ�ҵ�����");
	}
	else
	{
		(*p_it)->ShowInfo();
	}

	delete p_list;
	p_list = NULL;
	delete menu1;
	menu1 = NULL;
	delete menu2;
	menu2 = NULL;
	delete menu3;
	menu3 = NULL;
	delete menu4;
	menu4 = NULL;
	delete menu5;
	menu5 = NULL;
}

/*
 count ���÷� ͳ��ĳԪ�صĸ���
*/
void Test18_5()
{
	PRINT_T("===Test18_5");
	list<short>* p_list = new list<short>();
	p_list->push_back(7);
	p_list->push_back(6);
	p_list->push_back(3);
	p_list->push_back(3);
	p_list->push_back(7);

	for_each(p_list->begin(), p_list->end(), FunElementShort());
	PRINT_T("count");
	int num = count(p_list->begin(), p_list->end(), p_list->front());
	cout << p_list->front() << "��" << num << "��" << endl;
	delete p_list;
	p_list = NULL;

	list<Menu*>* p_list_menus = new list<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 10);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);
	AddAlogrithmDatas(p_list_menus, menu1);
	AddAlogrithmDatas(p_list_menus, menu2);
	AddAlogrithmDatas(p_list_menus, menu3);
	AddAlogrithmDatas(p_list_menus, menu4);
	AddAlogrithmDatas(p_list_menus, menu5);

	for_each(p_list_menus->begin(), p_list_menus->end(), FunObjForEachArgsPointer());

	int menu_count = count_if(p_list_menus->begin(), p_list_menus->end(), FunFindPrice(10));

	PRINT_T(menu_count);

	delete p_list_menus; p_list_menus = NULL;
	delete menu1; menu1 = NULL;
	delete menu2; menu2 = NULL;
	delete menu3; menu3 = NULL;
	delete menu4; menu4 = NULL;
	delete menu5; menu5 = NULL;
}

/*
 sort ���÷� ����
*/
void Test18_6()
{
	PRINT_T("===Test18_6");
	vector<Menu*>* p_vector = new vector<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 50);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 50);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 30);

	AddAlogrithmDatas(p_vector, menu1);
	AddAlogrithmDatas(p_vector, menu2);
	AddAlogrithmDatas(p_vector, menu3);
	AddAlogrithmDatas(p_vector, menu4);
	AddAlogrithmDatas(p_vector, menu5);
	for_each(p_vector->begin(), p_vector->end(), FunObjForEachArgsPointer());

	PRINT_T(" sort");
	sort(p_vector->begin(), p_vector->end(), FunSort(1));
	for_each(p_vector->begin(), p_vector->end(), FunObjForEachArgsPointer());
	delete p_vector; p_vector = NULL;
	delete menu1; menu1 = NULL;
	delete menu2; menu2 = NULL;
	delete menu3; menu3 = NULL;
	delete menu4; menu4 = NULL;
	delete menu5; menu5 = NULL;
}

/*
 random_shuffle �������˳��
*/
void Test18_7()
{

	PRINT_T("===Test18_7");
	deque<Menu*>* p_deque = new deque<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);

	p_deque->push_back(menu1);
	p_deque->push_back(menu2);
	p_deque->push_back(menu3);
	p_deque->push_back(menu4);
	p_deque->push_back(menu5);
	for_each(p_deque->begin(), p_deque->end(), FunObjForEachArgsPointer());

	PRINT_T("random_shuffle");
	random_shuffle(p_deque->begin(), p_deque->end());
	for_each(p_deque->begin(), p_deque->end(), FunObjForEachArgsPointer());
	delete p_deque; p_deque = NULL;
	delete menu1; menu1 = NULL;
	delete menu2; menu2 = NULL;
	delete menu3; menu3 = NULL;
	delete menu4; menu4 = NULL;
	delete menu5; menu5 = NULL;
}

/*
 merge �ϲ� ���������϶����������в��ܺϲ�����
*/
void Test18_8()
{
	PRINT_T("===Test18_8");
	vector<short> p_v1;

	p_v1.push_back(1);
	p_v1.push_back(2);
	p_v1.push_back(3);
	p_v1.push_back(4);
	vector<short> p_v2;
	p_v2.push_back(11);
	p_v2.push_back(22);
	p_v2.push_back(33);
	p_v2.push_back(44);
	vector<short> p_v_target;
	p_v_target.resize(p_v1.size() + p_v2.size());
	PRINT_T("merge");
	merge(p_v1.begin(), p_v1.end(), p_v2.begin(), p_v2.end(), p_v_target.begin());
	for_each(p_v_target.begin(), p_v_target.end(), FunElementShort());

}

/*
 reverse ������������
*/
void Test18_9()
{
	PRINT_T("===Test18_7");
	deque<Menu*>* p_deque = new deque<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);

	p_deque->push_back(menu1);
	p_deque->push_back(menu2);
	p_deque->push_back(menu3);
	p_deque->push_back(menu4);
	p_deque->push_back(menu5);
	for_each(p_deque->begin(), p_deque->end(), FunObjForEachArgsPointer());

	PRINT_T("reverse");
	reverse(p_deque->begin(), p_deque->end());
	for_each(p_deque->begin(), p_deque->end(), FunObjForEachArgsPointer());
	delete p_deque;
	delete menu1; menu1 = NULL;
	delete menu2; menu2 = NULL;
	delete menu3; menu3 = NULL;
	delete menu4; menu4 = NULL;
	delete menu5; menu5 = NULL;
}

/*
 copy�������ݵ���һ��������
*/
void Test18_10()
{
	PRINT_T("===Test18_10");
	vector<Menu*>* p_vector = new vector<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);
	AddAlogrithmDatas(p_vector, menu1);
	AddAlogrithmDatas(p_vector, menu2);
	AddAlogrithmDatas(p_vector, menu3);
	AddAlogrithmDatas(p_vector, menu4);
	AddAlogrithmDatas(p_vector, menu5);
	for_each(p_vector->begin(), p_vector->end(), FunObjForEachArgsPointer());

	PRINT_T("copy");
	vector<Menu*>* p_target = new vector<Menu*>();
	p_target->resize(p_vector->size());
	copy(p_vector->begin(), p_vector->end(), p_target->begin());
	PRINT_T("��ӡcopy����");
	for_each(p_target->begin(), p_target->end(), FunObjForEachArgsPointer());

	delete p_target; p_target = NULL;
	delete p_vector; p_vector = NULL;
	delete menu1; menu1 = NULL;
	delete menu2; menu2 = NULL;
	delete menu3; menu3 = NULL;
	delete menu4; menu4 = NULL;
	delete menu5; menu5 = NULL;

}

/*
 replace��replace_if��ʹ�ã����б���ָ����Ԫ���滻Ϊ�µ�Ԫ��
 ������Ϊ�˷�����ʾ�����Ǿ�ʹ��replace_if�����ӣ���ʾ�滻�Զ������ͣ�
*/
void Test18_11()
{
	PRINT_T("===Test18_11");
	deque<Menu*>* p_deque = new deque<Menu*>();
	Menu* menu1 = new Menu("ƻ��", "�崨ƻ��", 10);
	Menu* menu2 = new Menu("����", "��������", 10);
	Menu* menu3 = new Menu("�ƹ�", "�Ϻ��ƹ�", 30);
	Menu* menu4 = new Menu("����", "�人����", 40);
	Menu* menu5 = new Menu("ţ��", "����ţ��", 50);

	p_deque->push_back(menu1);
	p_deque->push_back(menu2);
	p_deque->push_back(menu3);
	p_deque->push_back(menu4);
	p_deque->push_back(menu5);

	for_each(p_deque->begin(), p_deque->end(), FunObjForEachArgsPointer());
	PRINT_T("replace_if");
	replace_if(p_deque->begin(), p_deque->end(), FunReplaceByCondition(10), new Menu("����", "��������", 99));
	for_each(p_deque->begin(), p_deque->end(), FunObjForEachArgsPointer());

	delete p_deque; p_deque = NULL;
	delete menu1; menu1 = NULL;
	delete menu2; menu2 = NULL;
	delete menu3; menu3 = NULL;
	delete menu4; menu4 = NULL;
	delete menu5; menu5 = NULL;
}

/*
 swap�������������е�Ԫ��
  (ֻ�ܽ���ͬ�����͵�stl)
*/
void Test18_12()
{
	set<short>* p_set1 = new set<short>();
	p_set1->insert(1);
	p_set1->insert(2);
	p_set1->insert(3);
	p_set1->insert(4);

	set<short>* p_set2 = new set<short>();
	p_set2->insert(44);
	p_set2->insert(22);
	p_set2->insert(11);
	p_set2->insert(33);

	PRINT_T("����ǰ��");
	for_each(p_set1->begin(), p_set1->end(), FunElementShort());
	for_each(p_set2->begin(), p_set2->end(), FunElementShort());
	PRINT_T("������");
	swap(p_set1, p_set2);
	for_each(p_set1->begin(), p_set1->end(), FunElementShort());
	for_each(p_set2->begin(), p_set2->end(), FunElementShort());

	delete p_set1; p_set1 = NULL;
	delete p_set2; p_set2 = NULL;
}

/*
 accumulate����������ԪԪ�غ�
 */
void Test18_13()
{
	PRINT_T("===Test18_13");
	vector<short>* p_vector = new vector<short>();
	p_vector->push_back(1);
	p_vector->push_back(2);
	p_vector->push_back(3);
	p_vector->push_back(4);
	short allCount = accumulate(p_vector->begin(), p_vector->end(), 0);
	PRINT_T(allCount);
	delete p_vector; p_vector = NULL;
}

/*
 fill��ָ�������ڵ�Ԫ�� ���������滻
*/
void Test18_14()
{
	PRINT_T("===Test18_14");
	list<short>* p_list = new list<short>();
	p_list->resize(10);
	for_each(p_list->begin(), p_list->end(), FunElementShort());
	fill(p_list->begin(), p_list->end(), 20);
	PRINT_T("fill");
	for_each(p_list->begin(), p_list->end(), FunElementShort());
	delete p_list; p_list = NULL;
}

/*
 set_intersection�󼯺��еĽ���
*/
void Test18_15()
{
	PRINT_T("===Test18_15");
	vector<short> p_v1;
	vector<short> p_v2;
	for (int i = 0; i < 10; i++)
	{
		p_v1.push_back(i);
		p_v2.push_back(i + 2);
	}
	vector<short> p_v3;
	p_v3.resize(min(p_v1.size(), p_v2.size())); // ����ȡ���������ϵ���Сֵ

	vector<short>::iterator p_end = set_intersection(p_v1.begin(), p_v1.end(), p_v2.begin(), p_v2.end(), p_v3.begin());
	for_each(p_v3.begin(), p_end, FunElementShort());
}

/*
 set_union�󼯺��еĲ���
*/
void Test18_16()
{
	PRINT_T("===Test18_16");
	vector<short> p_v1;
	vector<short> p_v2;
	for (int i = 0; i < 10; i++)
	{
		p_v1.push_back(i);
		p_v2.push_back(i + 2);
	}
	vector<short> p_v3;
	p_v3.resize(p_v1.size() + p_v2.size()); // ����ȡ���������ϵ���Сֵ

	vector<short>::iterator p_end = set_union(p_v1.begin(), p_v1.end(), p_v2.begin(), p_v2.end(), p_v3.begin());
	for_each(p_v3.begin(), p_end, FunElementShort());
}

/*
 set_difference�󲹼�
*/
void Test18_17() 
{
	PRINT_T("===Test18_17");
	vector<short> p_v1;
	vector<short> p_v2;
	for (int i = 0; i < 10; i++)
	{
		p_v1.push_back(i);
		p_v2.push_back(i + 2);
	}
	vector<short> p_v3;
	p_v3.resize(max(p_v1.size(),p_v2.size())); // ����ȡ���������ϵ���Сֵ
	PRINT_T("p_v1��p_v2�Ĳ���"); // �����Ե�
	vector<short>::iterator p_end = set_difference(p_v1.begin(), p_v1.end(), p_v2.begin(), p_v2.end(), p_v3.begin());
	for_each(p_v3.begin(), p_end, FunElementShort());

}
/*
  **************************algorithm�㷨�����ϰ ����**************************
*/

/*
 �ع���ϰ
 ����һ������
*/
void Test_review_01() 
{
	PRINT_T("===Test_review_01");
	Apple* p_apple = new Apple("�츻ʿ1��","�츻ʿ");
	p_apple->set_supplier("�츻ʿ����");
	p_apple->set_price(11.5F);
	cout << p_apple->get_supplier() << "\t" << p_apple->get_type() << "\t" << p_apple->get_price() << endl;
	delete p_apple;p_apple = NULL;
}

/*
 �ع���ϰ
 ����һ�����󣬺��̳й�ϵ
*/
void Test_review_02() 
{
	PRINT_T("===Test_review_02");
	Apple* p_1 = new Apple("�츻ʿ1��", "�츻ʿ",15.6F,"�츻ʿ����");
	Apple* p_2 = new Apple("�崨1��", "�崨ϵ��", 20.5F, "�崨���˼�");
	cout << p_1->get_supplier() << "\t" << p_1->get_type() << "\t" << p_1->get_price() << endl;
	cout << p_2->get_supplier() << "\t" << p_2->get_type() << "\t" << p_2->get_price() << endl;
	delete p_1; p_1 = NULL;
	delete p_2; p_2 = NULL;

	//Apple* p_2 = new Apple("�崨1��", "�崨ϵ��", 20.5F, "�崨���˼�");
	//cout << p_2->get_supplier() << "\t" << p_2->get_type() << "\t" << p_2->get_price() << endl;
	//delete p_2; p_2 = NULL;
}

/*
 �ع���ϰ
 �ճ������������ϰ��
*/
void Test_review_03()
{
	PRINT_T("===Test_review_03");
	Peach* p_peach = new Peach("��³��1��","���",55.6F,"��³��ƽ�۹��߹�˾");
	cout << "name :" << p_peach->get_name() << " supplier:" << p_peach->get_supplier() << endl;
	delete p_peach; p_peach = NULL;
}


void executeFun01(Banana* p_banana) 
{
	p_banana->show_banana_info();
}
/*
 �ع���ϰ
 �ճ������������ϰ��
 ����̳е�ѧϰ ��ͨ������д��������ַ���
*/
void Test_review_04() 
{
	PRINT_T("===Test_review_04");
	Banana* p_b1 = new Banana("�ս�1��","��ͨ��");
	Banana* p_b2 = new BananaImmortal("���˽�1��", "���˽�","yellow immortal");
	executeFun01(p_b1);
	executeFun01(p_b2);
	delete p_b1; p_b1 = NULL;
	delete p_b2; p_b2 = NULL;
}

int main()
{
	PRINT_T("===main()");
	//Test01();
	//Test02();
	//Test03();
	//Test04();
	//Test05();
	//Test06_1(); // C++�еļ̳У����麯��������java�еĳ�������
	//Test06_2(); // C++�еļ̳У����麯��������java�еĳ�������,�ö��ڴ��е�ʵ����������ϰ
	//Test07_1(); //���ַ������������� �ַ�������
	//Test07_2(); //���ַ������������� �ַ���������ȫ������+'\0'�� 
	//Test07_3(); //���ַ������������� �ַ�������������������
	//Test07_4(); //���ַ������������� �ַ���׷�ӣ�ȫ��׷��+'\0'��
	//Test07_5(); //���ַ������������� �ַ���׷�ӣ�����׷�ӣ�
	//Test07_6(); //���ַ������������� �ַ����Ƚ� (�����Ƚ�)
	//Test07_7(); //���ַ������������� �ַ����Ƚ� (ȫ���Ƚ�)
	//Test07_8(); //���ַ������������� �ַ������� (ȫ������)
	//Test07_9(); //���ַ������������� �ַ�����ȡ
	//Test08_1(); //���ڴ����������memcpy 
	//Test08_2(); //���ڴ����������memmove
	//Test08_3(); //���ڴ����������memcmp
	//Test08_4(); //���ڴ����������memset
	//Test09();   //����װ������ϰ��
	//Test10_0(); //���ļ�д���ı�д���ⲿ����
	//Test10_1(); //���ļ������ı������ڴ�
	//Test10_2(); //��������д������������д���ⲿ����
	//Test10_3(); //�������ƶ�������������ȥȡ���ڴ������
	//Test11();   //���ڴ溯����malloc calloc realloc ��ϰ
	//Test12_1(); //��ģ�巽������ͬ����ǩ����αǩ�������ȵ�����ͨ����
	//Test12_2(); //��ģ�巽������������
	//Test12_3(); //��ģ�巽������ϰһ��
	//Test12_4(); //��ģ�巽�����ض����;��廯����
	//Test12_5(); //��ģ���ࡿpart1
	//Test12_6(); //��ģ���ࡿ����
	//Test12_7(); //��ģ���ࡿ.h .cpp --->.hpp
	//Test12_8(); //����ģ�塿��ͨ���м���ģ�巽��
	//Test13_1(); //��stl vector����򵥵�ʹ��
	//Test13_2(); //��stl vector���������� ��ɾ�Ĳ�
	//Test13_3(); //��stl vector���Զ������� ��ɾ�Ĳ�
	//Test14();   //��stl deque��˫�˶���
	//Test15();   //��stl list��˫������ ����c++��list�����������˫������
	//Test16();   //��stl set��set���ϣ����ظ�����order
	//Test17();   //��stl map��map����
	//Test18_1(); //��stl for_each�������㷨 ��ͨ���� �� �º���
	//Test18_2(); //��stl transform������ת�� (!!! �����⣬��Ҫȷ���޸�)
	//Test18_3(); //��stl find������Ԫ��
	//Test18_4(); //��stl find_if������Ԫ��
	//Test18_5(); //��stl count��ͳ��ĳԪ�ظ���
	//Test18_6(); //��stl sort��������
	//Test18_7(); //��stl random_shuffle�������������
	//Test18_8(); //��stl merge������ϲ�
	//Test18_9(); //��stl reverse�����������ݵߵ�
	//Test18_10();//��stl copy�����Ͽ����㷨
	//Test18_11();//��stl replace_if���滻Ԫ����Ŀ��Ԫ��Ϊָ����Ԫ��
	//Test18_12();//��stl swap������������ͬ���ͣ�stl�е�Ԫ��
	//Test18_13();//��stl accumulate����������������ָ����Ԫ���ۼ�
	//Test18_14();//��stl fill���������������ڵ�Ԫ�����¸���
	//Test18_15();//��stl set_intersection���������󽻼�
	//Test18_16();//��stl set_union���������󲢼�
	//Test18_17();//��stl set_union���������󲹼�

    //==================================================
	//Test_review_01();//��review practice����������
	//Test_review_02();//��review practice���������󣬺��̳й�ϵ
	//Test_review_03();//��review practice���������󣬺��̳й�ϵ���ճ���ϰ��
	Test_review_04();//��review practice���������󣬺��̳й�ϵ���ճ���ϰ�� ������ַ���
	return 1;

}