#define _CRT_SECURE_NO_WARNINGS 1
extern "C" {
#include "demo_sort/base_sort.h"
#include "demo_str_operate/operate_string_method.h"
}
#include <iostream>
#include "demo_print/base_print.h"
#include "demo_geometry/Cube.h"
#include "demo_player/bean/player_base_soccer.h"
#include "demo_player/player_method.h"
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
	PlayerBaseSoccer sp(1, 15, 1);
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
 C++�еļ̳У����麯��������java�еĳ�������
 �ö��ڴ��е�ʵ����������ϰ
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
  �ַ���������ȫ���滻��
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
	int lenth = Get_strlen(des) -1 ;
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
	const char* p = "xixixix";
	Do_strncat(arr, p, 5);
	int size = sizeof(arr) / sizeof(arr[0]);
	PrintArrayChar(arr, size);
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
	//Test07_1(); //���ַ������������� ���ַ�������
	//Test07_2(); //���ַ������������� �ַ���������ȫ���滻+'\0'�� 
	//Test07_3(); //���ַ������������� �ַ�������������������
	//Test07_4(); //���ַ������������� �ַ���׷�ӣ�ȫ��׷��+'\0'��
	Test07_5(); //���ַ������������� �ַ���׷�ӣ�����׷�ӣ�
	return 1;
}