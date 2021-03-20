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
	Student<string, short> * stu1 = new Student<string, short>("��ȵ",55);
	stu1->ShowInfo();
	
	Student<string, short> * stu2 = new Student<string, short>("��٢", 40);
	stu2->ShowInfo();
	
	Student<string, short> * stu3 = new Student<string, short>("��˼��",35);
	stu3->ShowInfo();

	Student<string, short> * stu4 = new Student<string, short>("���پ�",20);
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
	teacher->ShowToPlay<string,short>("����Ҫ��",1500);
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
	Menu* menu1 = new Menu("�ײ�","���ײ�",15);
	Menu* menu2 = new Menu("����", "���ֵ���", 500);
	Menu* menu3 = new Menu("��ֽ","�Ͼɱ�ֽ",6);
	Menu* menu4 = new Menu("ľ��","�滨ľľ��",100);
	Menu* menu5 = new Menu("ϡ��","8��ϡ��",3);
	Menu* menu6 = new Menu("����", "���⺺��", 20);


	AddDataMenuVector(p_menus, menu1);
	AddDataMenuVector(p_menus, menu2);
	AddDataMenuVector(p_menus, menu3);
	AddDataMenuVector(p_menus, menu4);
	AddDataMenuVector(p_menus, menu5);

	DelDataMenuVector(p_menus, "ľ��");
	UpdateDataMenuVector(p_menus, "ϡ��","�����Ϲ�ϡ��");
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
		AddDataDeque(p_deque,arr[i]);
	}

	ShowDataDeque(p_deque);

	delete p_deque;
	p_deque = NULL;

}

/*
 ˫��������ϰ
*/
void Test15() 
{
	PRINT_T("===Test15");
	Menu* menu1 = new Menu("ƻ��","�崨ƻ��",10);
	Menu* menu2 = new Menu("����", "��������", 20);
	Menu* menu3 = new Menu("ʯ��","����ʯ��",30);
	Menu* menu4 = new Menu("����", "ɽ������",40);
	Menu* menu5 = new Menu("����","�㶫����",50);
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
	//Test14(); //��stl deque��˫�˶���
	Test15();//��stl list��˫������ ����c++��list�����������˫������
	return 1;

}