// MemoryLeakForStatic.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

//#define _CRTDBG_MAP_ALLOC
//
//#include <stdlib.h>
#include <crtdbg.h>

class A
{
public:
	A();
	~A();

	int* pInt;
};

A::A()
{
	pInt = new int;
}

A::~A()
{
//	delete pInt;
}

static A a;

int _tmain(int argc, _TCHAR* argv[])
{
	// ���۽����� �־��ִ� �ڵ�
	_CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
//	_CrtSetBreakAlloc( 2666890 );

	// ��������� �־� �ִ� �ڵ�
	// �Ʒ����� ����ϸ� Static���� ���� �߻��ȴ�.
	//_CrtDumpMemoryLeaks();

	return 0;
}