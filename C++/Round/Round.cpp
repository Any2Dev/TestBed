// Round.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <math.h>

#define banollim(x,dig) (floor((x)*pow(10,dig)+0.5)/pow(10,dig))

float Round( float fNumber, int iDecimal )
{
	return floor( fNumber * pow( 10.0f, iDecimal ) + 0.5f ) / pow( 10.0f, iDecimal );
}

int _tmain(int argc, _TCHAR* argv[])
{
	float fTest = 0.0f;
	float value = 11.123489f;
	int i = 3;

	float newVal = Round( value, i );

	return 0;
}

