
#include "stdafx.h"
#include FRAMEWORK_H

// bit
UCHAR System_Type::GetBit(UCHAR Bit, UCHAR Value) {

	UCHAR bRet = NULL;

	switch (Bit)
	{
	case 0:
		if ((Value & 1)) { bRet = ON; }
		else { bRet = OFF; }
		break;
	case 1:
		if ((Value & 2)) { bRet = ON; }
		else { bRet = OFF; }
		break;
	case 2:
		if ((Value & 4)) { bRet = ON; }
		else { bRet = OFF; }
		break;
	case 3:
		if ((Value & 8)) { bRet = ON; }
		else { bRet = OFF; }
		break;
	case 4:
		if ((Value & 16)) { bRet = ON; }
		else { bRet = OFF; }
		break;
	case 5:
		if ((Value & 32)) { bRet = ON; }
		else { bRet = OFF; }
		break;
	case 6:
		if ((Value & 64)) { bRet = ON; }
		else { bRet = OFF; }
		break;
	case 7:
		if ((Value & 128)) { bRet = ON; }
		else { bRet = OFF; }
		break;
	}

	return bRet;
}
UCHAR * System_Type::GetBits(UCHAR Value) {
	UCHAR * Bits = new UCHAR[8];
	for (UCHAR i = 0; i < 8; i++) { Bits[i] = GetBit(i, Value); }
	return Bits;
}