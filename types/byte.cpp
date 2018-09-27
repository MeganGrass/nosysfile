
#include "stdafx.h"
#include FRAMEWORK_H

// 
UCHAR System_Type::GetByte(UCHAR Id, ULONG Value) {

	UCHAR Byte = NULL;
	switch (Id)
	{
	case 0:
		Byte = ((Value << 24) >> 24);
	break;
	case 1:
		Byte = ((Value << 16) >> 24);
	break;
	case 2:
		Byte = ((Value & 0x0000FF00) >> 8);
	break;
	case 3:
		Byte = ((Value & 0x000000FF));
	break;
	}

	// Terminate
	return Byte;
}