// STL_List.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "DataStore.h"



int _tmain(int argc, _TCHAR* argv[])
{
	DataStore ds;

	ds.PushData();
	ds.PushData();
	ds.PushData();
	ds.PushData();
	ds.PushData();

	ds.RemoveAllData();

	return 0;
}

