// StringReturn.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

char* GetString_1()
{
	return "1";
}

char* GetString_2()
{
	return "2";
}


int _tmain(int argc, _TCHAR* argv[])
{
	char* szString = NULL;

	szString = "0";

	szString = GetString_1();

	szString = GetString_2();

	return 0;
}



