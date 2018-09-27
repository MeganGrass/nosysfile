
#include "stdafx.h"
#include FRAMEWORK_H

// typecast 8bit
CHAR System_Type::Get8(CHAR Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(UCHAR Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(SHORT Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(USHORT Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(INT Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(UINT Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(LONG Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(ULONG Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(FLOAT Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(CONST CHAR * Value) {
	return static_cast<CHAR>(atoi(Value));
}
CHAR System_Type::Get8(CONST WCHAR * Value) {
	return static_cast<CHAR>(_wtoi(Value));
}
CHAR System_Type::Get8(BOOL HexaDecimal, CONST CHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		sscanf_s(Value, "%X", &Output);
		return static_cast<CHAR>(Output);
	}
	else {
		return static_cast<CHAR>(atoi(Value));
	}

}
CHAR System_Type::Get8(BOOL HexaDecimal, CONST WCHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		swscanf_s(Value, L"%X", &Output);
		return static_cast<CHAR>(Output);
	}
	else {
		return static_cast<CHAR>(_wtoi(Value));
	}

}
CHAR System_Type::Get8(DOUBLE Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(LDOUBLE Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(LLONG Value) {
	return static_cast<CHAR>(Value);
}
CHAR System_Type::Get8(ULLONG Value) {
	return static_cast<CHAR>(Value);
}
UCHAR System_Type::GetU8(CHAR Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(UCHAR Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(SHORT Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(USHORT Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(INT Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(UINT Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(LONG Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(ULONG Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(FLOAT Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(CONST CHAR * Value) {
	return static_cast<UCHAR>(atoi(Value));
}
UCHAR System_Type::GetU8(CONST WCHAR * Value) {
	return static_cast<UCHAR>(_wtoi(Value));
}
UCHAR System_Type::GetU8(BOOL HexaDecimal, CONST CHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		sscanf_s(Value, "%X", &Output);
		return static_cast<UCHAR>(Output);
	}
	else {
		return static_cast<UCHAR>(atoi(Value));
	}

}
UCHAR System_Type::GetU8(BOOL HexaDecimal, CONST WCHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		swscanf_s(Value, L"%X", &Output);
		return static_cast<UCHAR>(Output);
	}
	else {
		return static_cast<UCHAR>(_wtoi(Value));
	}

}
UCHAR System_Type::GetU8(DOUBLE Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(LDOUBLE Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(LLONG Value) {
	return static_cast<UCHAR>(Value);
}
UCHAR System_Type::GetU8(ULLONG Value) {
	return static_cast<UCHAR>(Value);
}
// typecast 16bit
SHORT System_Type::Get16(CHAR Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(UCHAR Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(SHORT Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(USHORT Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(INT Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(UINT Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(LONG Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(ULONG Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(FLOAT Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(CONST CHAR * Value) {
	return static_cast<SHORT>(atoi(Value));
}
SHORT System_Type::Get16(CONST WCHAR * Value) {
	return static_cast<SHORT>(_wtoi(Value));
}
SHORT System_Type::Get16(BOOL HexaDecimal, CONST CHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		sscanf_s(Value, "%X", &Output);
		return static_cast<SHORT>(Output);
	}
	else {
		return static_cast<SHORT>(atoi(Value));
	}

}
SHORT System_Type::Get16(BOOL HexaDecimal, CONST WCHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		swscanf_s(Value, L"%X", &Output);
		return static_cast<SHORT>(Output);
	}
	else {
		return static_cast<SHORT>(_wtoi(Value));
	}

}
SHORT System_Type::Get16(DOUBLE Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(LDOUBLE Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(LLONG Value) {
	return static_cast<SHORT>(Value);
}
SHORT System_Type::Get16(ULLONG Value) {
	return static_cast<SHORT>(Value);
}
USHORT System_Type::GetU16(CHAR Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(UCHAR Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(SHORT Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(USHORT Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(INT Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(UINT Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(LONG Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(ULONG Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(FLOAT Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(CONST CHAR * Value) {
	return static_cast<USHORT>(atoi(Value));
}
USHORT System_Type::GetU16(CONST WCHAR * Value) {
	return static_cast<USHORT>(_wtoi(Value));
}
USHORT System_Type::GetU16(BOOL HexaDecimal, CONST CHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		sscanf_s(Value, "%X", &Output);
		return static_cast<USHORT>(Output);
	}
	else {
		return static_cast<USHORT>(atoi(Value));
	}

}
USHORT System_Type::GetU16(BOOL HexaDecimal, CONST WCHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		swscanf_s(Value, L"%X", &Output);
		return static_cast<USHORT>(Output);
	}
	else {
		return static_cast<USHORT>(_wtoi(Value));
	}

}
USHORT System_Type::GetU16(DOUBLE Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(LDOUBLE Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(LLONG Value) {
	return static_cast<USHORT>(Value);
}
USHORT System_Type::GetU16(ULLONG Value) {
	return static_cast<USHORT>(Value);
}
SHORT System_Type::Create16(ULONG n0, ULONG n1) {
	return Get16(n1 | (n0 << 8) | (NULL << 16) | (NULL << 24));
}
USHORT System_Type::CreateU16(ULONG n0, ULONG n1) {
	return GetU16(n1 | (n0 << 8) | (NULL << 16) | (NULL << 24));
}
// typecast x86
LONG System_Type::Get32(CHAR Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(UCHAR Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(SHORT Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(USHORT Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(INT Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(UINT Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(LONG Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(ULONG Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(FLOAT Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(CONST CHAR * Value) {
	return static_cast<LONG>(atol(Value));
}
LONG System_Type::Get32(CONST WCHAR * Value) {
	return static_cast<LONG>(_wtol(Value));
}
LONG System_Type::Get32(BOOL HexaDecimal, CONST CHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		sscanf_s(Value, "%X", &Output);
		return static_cast<LONG>(Output);
	}
	else {
		return static_cast<LONG>(atol(Value));
	}

}
LONG System_Type::Get32(BOOL HexaDecimal, CONST WCHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		swscanf_s(Value, L"%X", &Output);
		return static_cast<LONG>(Output);
	}
	else {
		return static_cast<LONG>(_wtol(Value));
	}

}
LONG System_Type::Get32(DOUBLE Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(LDOUBLE Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(LLONG Value) {
	return static_cast<LONG>(Value);
}
LONG System_Type::Get32(ULLONG Value) {
	return static_cast<LONG>(Value);
}
ULONG System_Type::GetU32(CHAR Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(UCHAR Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(SHORT Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(USHORT Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(INT Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(UINT Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(LONG Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(ULONG Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(FLOAT Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(CONST CHAR * Value) {
	return static_cast<ULONG>(strtoul(Value, NULL, 0));
}
ULONG System_Type::GetU32(CONST WCHAR * Value) {
	return static_cast<ULONG>(wcstoul(Value, NULL, 0));
}
ULONG System_Type::GetU32(BOOL HexaDecimal, CONST CHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		sscanf_s(Value, "%X", &Output);
		return static_cast<ULONG>(Output);
	}
	else {
		return static_cast<ULONG>(strtoul(Value, NULL, 0));
	}

}
ULONG System_Type::GetU32(BOOL HexaDecimal, CONST WCHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		swscanf_s(Value, L"%X", &Output);
		return static_cast<ULONG>(Output);
	}
	else {
		return static_cast<ULONG>(wcstoul(Value, NULL, 0));
	}

}
ULONG System_Type::GetU32(DOUBLE Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(LDOUBLE Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(LLONG Value) {
	return static_cast<ULONG>(Value);
}
ULONG System_Type::GetU32(ULLONG Value) {
	return static_cast<ULONG>(Value);
}
LONG System_Type::Create32(ULONG n0, ULONG n1, ULONG n2, ULONG n3) {
	return Get32(n3 | (n2 << 8) | (n1 << 16) | (n0 << 24));
}
ULONG System_Type::CreateU32(ULONG n0, ULONG n1, ULONG n2, ULONG n3) {
	return GetU32(n3 | (n2 << 8) | (n1 << 16) | (n0 << 24));
}
ULONG System_Type::SwapU32(INT Value) {
	ULONG n0 = GetU32((Value & 0xFF000000) >> 24);
	ULONG n1 = GetU32((Value & 0x00FF0000) >> 16);
	ULONG n2 = GetU32((Value & 0x0000FF00) >> 8);
	ULONG n3 = GetU32((Value & 0x000000FF));
	ULONG Output = n0 | (n1 << 8) | (n2 << 16) | (n3 << 24);
	return static_cast<ULONG>(Output);
}
ULONG System_Type::SwapU32(UINT Value) {
	ULONG n0 = GetU32((Value & 0xFF000000) >> 24);
	ULONG n1 = GetU32((Value & 0x00FF0000) >> 16);
	ULONG n2 = GetU32((Value & 0x0000FF00) >> 8);
	ULONG n3 = GetU32((Value & 0x000000FF));
	ULONG Output = n0 | (n1 << 8) | (n2 << 16) | (n3 << 24);
	return static_cast<ULONG>(Output);
}
ULONG System_Type::SwapU32(LONG Value) {
	ULONG n0 = GetU32((Value & 0xFF000000) >> 24);
	ULONG n1 = GetU32((Value & 0x00FF0000) >> 16);
	ULONG n2 = GetU32((Value & 0x0000FF00) >> 8);
	ULONG n3 = GetU32((Value & 0x000000FF));
	ULONG Output = n0 | (n1 << 8) | (n2 << 16) | (n3 << 24);
	return static_cast<ULONG>(Output);
}
ULONG System_Type::SwapU32(ULONG Value) {
	ULONG n0 = GetU32((Value & 0xFF000000) >> 24);
	ULONG n1 = GetU32((Value & 0x00FF0000) >> 16);
	ULONG n2 = GetU32((Value & 0x0000FF00) >> 8);
	ULONG n3 = GetU32((Value & 0x000000FF));
	ULONG Output = n0 | (n1 << 8) | (n2 << 16) | (n3 << 24);
	return static_cast<ULONG>(Output);
}
// typecast x64
LLONG System_Type::Get64(CHAR Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(UCHAR Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(SHORT Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(USHORT Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(INT Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(UINT Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(LONG Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(ULONG Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(FLOAT Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(CONST CHAR * Value) {
	return static_cast<LLONG>(atoi(Value));
}
LLONG System_Type::Get64(CONST WCHAR * Value) {
	return static_cast<LLONG>(_wtoi(Value));
}
LLONG System_Type::Get64(BOOL HexaDecimal, CONST CHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		sscanf_s(Value, "%X", &Output);
		return static_cast<LLONG>(Output);
	}
	else {
		return static_cast<LLONG>(atoi(Value));
	}

}
LLONG System_Type::Get64(BOOL HexaDecimal, CONST WCHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		swscanf_s(Value, L"%X", &Output);
		return static_cast<LLONG>(Output);
	}
	else {
		return static_cast<LLONG>(_wtoi(Value));
	}

}
LLONG System_Type::Get64(DOUBLE Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(LDOUBLE Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(LLONG Value) {
	return static_cast<LLONG>(Value);
}
LLONG System_Type::Get64(ULLONG Value) {
	return static_cast<LLONG>(Value);
}
ULLONG System_Type::GetU64(CHAR Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(UCHAR Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(SHORT Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(USHORT Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(INT Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(UINT Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(LONG Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(ULONG Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(FLOAT Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(CONST CHAR * Value) {
	return static_cast<ULLONG>(atoi(Value));
}
ULLONG System_Type::GetU64(CONST WCHAR * Value) {
	return static_cast<ULLONG>(_wtoi(Value));
}
ULLONG System_Type::GetU64(BOOL HexaDecimal, CONST CHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		sscanf_s(Value, "%X", &Output);
		return static_cast<ULLONG>(Output);
	}
	else {
		return static_cast<ULLONG>(atoi(Value));
	}

}
ULLONG System_Type::GetU64(BOOL HexaDecimal, CONST WCHAR * Value) {

	if (HexaDecimal) {
		ULONG Output = NULL;
		swscanf_s(Value, L"%X", &Output);
		return static_cast<ULLONG>(Output);
	}
	else {
		return static_cast<ULLONG>(_wtoi(Value));
	}

}
ULLONG System_Type::GetU64(DOUBLE Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(LDOUBLE Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(LLONG Value) {
	return static_cast<ULLONG>(Value);
}
ULLONG System_Type::GetU64(ULLONG Value) {
	return static_cast<ULLONG>(Value);
}