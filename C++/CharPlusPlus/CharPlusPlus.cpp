// CharPlusPlus.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

namespace TRANSFORM
{
	typedef unsigned char TYPE;

	const TYPE NONE			= 0;
	const TYPE LAYPERSON		= 1;// �Ϲ��� ����
	const TYPE RANGER		= 3;// 1�� ���� ����
	const TYPE MAX			= 4;
}

int _tmain(int argc, _TCHAR* argv[])
{
	TRANSFORM::TYPE type = TRANSFORM::LAYPERSON;

	type++;

	return 0;
}

