#include <iostream>
#include "strutil.h"
using namespace std;

/*
�������� ������� ��� ���������� ������� ������ a � ������ str
int strConteins(char *a, char* str)
���������� -1, ���� �� ��������
������� ������, ���� ��������
����������:
1. ������� ���� ������ ������ ���������
2. ��������� ������ �������� ��������� �����:
main.cpp � ������� ��� ������������ strConteins
strutil.cpp � ���������� ������� strConteins
strutil.h - ���������� ������� strConteins
*/

int main()
{
	char string1[100], string2[100];
	cin >> string1 >> string2;
	cout << strConteins(string1, string2);
}