// GetFuncName.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

//#include <stdio.h>

class CCC
{
public:
	void Func()
	{
		int a = 0;

	//	printf( "%s\n", __PRETTY_FUNCTION__ );
		printf( "%s\n", __FUNCTION__ );
		printf( "%s\n", __FUNCDNAME__ );
		printf( "%s\n", __FUNCSIG__ );

		
	//	printf( "%s\n", __func__ );
		printf( "\n" );

		int b = 0;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	CCC c;
	c.Func();

	return 0;
}

