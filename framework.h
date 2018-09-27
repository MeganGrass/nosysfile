
#include STDAFX_H
#include RESOURCE_H

// Basic
typedef __int8				CHAR;
typedef unsigned __int8		UCHAR;
typedef __int16				SHORT;
typedef unsigned __int16	USHORT;
typedef __int32				INT;
typedef unsigned __int32	UINT;
typedef long int			LONG;
typedef unsigned long int	ULONG;
typedef __int64				LLONG;
typedef unsigned __int64	ULLONG;
typedef float				FLOAT;
typedef double				DOUBLE;
typedef long double			LDOUBLE;
typedef INT					BOOL;

#define FALSE		0
#define TRUE		1

#define FAIL		FALSE
#define SUCCESS		TRUE

#define OFF			FALSE
#define ON			TRUE

#define NO			FALSE
#define YES			TRUE

#define DISABLED	FALSE
#define ENABLED		TRUE
 
class System_Type {
private:
public:

	// boot
	System_Type(VOID);
	virtual ~System_Type(VOID);

	// bit
	UCHAR GetBit(UCHAR Bit, UCHAR Value);
	UCHAR * GetBits(UCHAR Value);

	// byte
	UCHAR GetByte(UCHAR Id, ULONG Value);

	// typecast 8bit
	CHAR Get8(CHAR Value);
	CHAR Get8(UCHAR Value);
	CHAR Get8(SHORT Value);
	CHAR Get8(USHORT Value);
	CHAR Get8(INT Value);
	CHAR Get8(UINT Value);
	CHAR Get8(LONG Value);
	CHAR Get8(ULONG Value);
	CHAR Get8(LLONG Value);
	CHAR Get8(ULLONG Value);
	CHAR Get8(FLOAT Value);
	CHAR Get8(DOUBLE Value);
	CHAR Get8(LDOUBLE Value);
	CHAR Get8(CONST CHAR * Value);
	CHAR Get8(CONST WCHAR * Value);
	CHAR Get8(BOOL HexaDecimal, CONST CHAR * Value);
	CHAR Get8(BOOL HexaDecimal, CONST WCHAR * Value);
	UCHAR GetU8(CHAR Value);
	UCHAR GetU8(UCHAR Value);
	UCHAR GetU8(SHORT Value);
	UCHAR GetU8(USHORT Value);
	UCHAR GetU8(INT Value);
	UCHAR GetU8(UINT Value);
	UCHAR GetU8(LONG Value);
	UCHAR GetU8(ULONG Value);
	UCHAR GetU8(LLONG Value);
	UCHAR GetU8(ULLONG Value);
	UCHAR GetU8(FLOAT Value);
	UCHAR GetU8(DOUBLE Value);
	UCHAR GetU8(LDOUBLE Value);
	UCHAR GetU8(CONST CHAR * Value);
	UCHAR GetU8(CONST WCHAR * Value);
	UCHAR GetU8(BOOL HexaDecimal, CONST CHAR * Value);
	UCHAR GetU8(BOOL HexaDecimal, CONST WCHAR * Value);

	// typecast 16bit
	SHORT Get16(CHAR Value);
	SHORT Get16(UCHAR Value);
	SHORT Get16(SHORT Value);
	SHORT Get16(USHORT Value);
	SHORT Get16(INT Value);
	SHORT Get16(UINT Value);
	SHORT Get16(LONG Value);
	SHORT Get16(LLONG Value);
	SHORT Get16(ULLONG Value);
	SHORT Get16(ULONG Value);
	SHORT Get16(FLOAT Value);
	SHORT Get16(DOUBLE Value);
	SHORT Get16(LDOUBLE Value);
	SHORT Get16(CONST CHAR * Value);
	SHORT Get16(CONST WCHAR * Value);
	SHORT Get16(BOOL HexaDecimal, CONST CHAR * Value);
	SHORT Get16(BOOL HexaDecimal, CONST WCHAR * Value);
	USHORT GetU16(CHAR Value);
	USHORT GetU16(UCHAR Value);
	USHORT GetU16(SHORT Value);
	USHORT GetU16(USHORT Value);
	USHORT GetU16(INT Value);
	USHORT GetU16(UINT Value);
	USHORT GetU16(LONG Value);
	USHORT GetU16(LLONG Value);
	USHORT GetU16(ULLONG Value);
	USHORT GetU16(ULONG Value);
	USHORT GetU16(FLOAT Value);
	USHORT GetU16(DOUBLE Value);
	USHORT GetU16(LDOUBLE Value);
	USHORT GetU16(CONST CHAR * Value);
	USHORT GetU16(CONST WCHAR * Value);
	USHORT GetU16(BOOL HexaDecimal, CONST CHAR * Value);
	USHORT GetU16(BOOL HexaDecimal, CONST WCHAR * Value);
	SHORT Create16(ULONG n0, ULONG n1);
	USHORT CreateU16(ULONG n0, ULONG n1);

	// typecast x86
	LONG Get32(CHAR Value);
	LONG Get32(UCHAR Value);
	LONG Get32(SHORT Value);
	LONG Get32(USHORT Value);
	LONG Get32(INT Value);
	LONG Get32(UINT Value);
	LONG Get32(LONG Value);
	LONG Get32(ULONG Value);
	LONG Get32(LLONG Value);
	LONG Get32(ULLONG Value);
	LONG Get32(FLOAT Value);
	LONG Get32(DOUBLE Value);
	LONG Get32(LDOUBLE Value);
	LONG Get32(CONST CHAR * Value);
	LONG Get32(CONST WCHAR * Value);
	LONG Get32(BOOL HexaDecimal, CONST CHAR * Value);
	LONG Get32(BOOL HexaDecimal, CONST WCHAR * Value);
	ULONG GetU32(CHAR Value);
	ULONG GetU32(UCHAR Value);
	ULONG GetU32(SHORT Value);
	ULONG GetU32(USHORT Value);
	ULONG GetU32(INT Value);
	ULONG GetU32(UINT Value);
	ULONG GetU32(LONG Value);
	ULONG GetU32(ULONG Value);
	ULONG GetU32(LLONG Value);
	ULONG GetU32(ULLONG Value);
	ULONG GetU32(FLOAT Value);
	ULONG GetU32(DOUBLE Value);
	ULONG GetU32(LDOUBLE Value);
	ULONG GetU32(CONST CHAR * Value);
	ULONG GetU32(CONST WCHAR * Value);
	ULONG GetU32(BOOL HexaDecimal, CONST CHAR * Value);
	ULONG GetU32(BOOL HexaDecimal, CONST WCHAR * Value);
	LONG Create32(ULONG n0, ULONG n1, ULONG n2, ULONG n3);
	ULONG CreateU32(ULONG n0, ULONG n1, ULONG n2, ULONG n3);
	ULONG SwapU32(INT Value);
	ULONG SwapU32(UINT Value);
	ULONG SwapU32(LONG Value);
	ULONG SwapU32(ULONG Value);

	// typecast x64
	LLONG Get64(CHAR Value);
	LLONG Get64(UCHAR Value);
	LLONG Get64(SHORT Value);
	LLONG Get64(USHORT Value);
	LLONG Get64(INT Value);
	LLONG Get64(UINT Value);
	LLONG Get64(LONG Value);
	LLONG Get64(ULONG Value);
	LLONG Get64(LLONG Value);
	LLONG Get64(ULLONG Value);
	LLONG Get64(FLOAT Value);
	LLONG Get64(DOUBLE Value);
	LLONG Get64(LDOUBLE Value);
	LLONG Get64(CONST CHAR * Value);
	LLONG Get64(CONST WCHAR * Value);
	LLONG Get64(BOOL HexaDecimal, CONST CHAR * Value);
	LLONG Get64(BOOL HexaDecimal, CONST WCHAR * Value);
	ULLONG GetU64(CHAR Value);
	ULLONG GetU64(UCHAR Value);
	ULLONG GetU64(SHORT Value);
	ULLONG GetU64(USHORT Value);
	ULLONG GetU64(INT Value);
	ULLONG GetU64(UINT Value);
	ULLONG GetU64(LONG Value);
	ULLONG GetU64(ULONG Value);
	ULLONG GetU64(LLONG Value);
	ULLONG GetU64(ULLONG Value);
	ULLONG GetU64(FLOAT Value);
	ULLONG GetU64(DOUBLE Value);
	ULLONG GetU64(LDOUBLE Value);
	ULLONG GetU64(CONST CHAR * Value);
	ULLONG GetU64(CONST WCHAR * Value);
	ULLONG GetU64(BOOL HexaDecimal, CONST CHAR * Value);
	ULLONG GetU64(BOOL HexaDecimal, CONST WCHAR * Value);

};

class System_String {
private:
public:

	// Boot
	System_String(VOID);
	virtual ~System_String(VOID);

	// Variable
	ULONG _StrLen;		// Temporary buffer for size of string from Format() for Get() // (*2)-4 for W size, -2 for A size

	// Create
	CHAR * Get(CONST CHAR * _Format, ...);
	WCHAR * Get(CONST WCHAR * _Format, ...);
	VOID Get(ULONG &StrLen, CHAR &String, CONST CHAR * _Format, ...);

	// Character Conversion
	CHAR * ToA(WCHAR * _Format, ...);
	WCHAR * ToW(CHAR * _Format, ...);
	CHAR * ToUpper(CHAR * _Format, ...);
	WCHAR * ToUpper(WCHAR * _Format, ...);
	CHAR * ToLower(CHAR * _Format, ...);
	WCHAR * ToLower(WCHAR * _Format, ...);

	// Integer Conversion
	CHAR * FromInt(LLONG Value);
	CHAR * FromIntU(ULLONG Value);
	LONG ToInt(CHAR * _Format, ...);
	ULONG ToIntU(CHAR * _Format, ...);
	LLONG ToInt64(CHAR * _Format, ...);
	ULLONG ToIntU64(CHAR * _Format, ...);

	// Floating-Point Conversion
	CHAR * FromFloat(DOUBLE Value);
	DOUBLE ToFloat(CHAR * _Format, ...);
	DOUBLE ToFloat(WCHAR * _Format, ...);

	// Commandline
	CHAR ** CommandLine(ULONG &nArgs, CONST CHAR * _Format, ...);
	ULONG GetArgCount(CHAR * _Format, ...);
	ULONG GetArgCount(WCHAR * _Format, ...);
	CHAR * GetArg(ULONG iArg, CHAR * _Format, ...);
	WCHAR * GetArg(ULONG iArg, WCHAR * _Format, ...);

	// Meta
	CHAR * GetDirectory(CHAR * _Format, ...);
	WCHAR * GetDirectory(WCHAR * _Format, ...);
	CHAR * GetNamebase(CHAR * _Format, ...);
	WCHAR * GetNamebase(WCHAR * _Format, ...);
	CHAR * GetExtension(CHAR * _Format, ...);
	WCHAR * GetExtension(WCHAR * _Format, ...);

	// Message Box
	VOID Message(CHAR * _Format, ...);
	VOID Message(WCHAR * _Format, ...);

};

// To edit an existing file, use w+ for Mode
typedef enum tagOpenFileMode {
	READ_FILE = 0x00,		// rb
	CREATE_FILE = 0x01,		// wb
	EDIT_FILE = 0x02		// rb+
} OpenFileMode;
class System_File :
	public System_Type,
	public System_String {
private:
public:

	// Boot
	System_File(VOID);
	virtual ~System_File(VOID);

	// Status
	BOOL IsOpen(_iobuf * FILE);
	BOOL Exists(CONST CHAR * _Format, ...);
	BOOL Exists(CONST WCHAR * _Format, ...);

	// Memory
	UCHAR * Buffer(CONST CHAR * _Format, ...);
	UCHAR * Buffer(CONST WCHAR * _Format, ...);
	UCHAR * Buffer(ULONG &_ElementSize, CONST CHAR * _Format, ...);
	UCHAR * Buffer(ULONG _Offset, ULONG &_ElementSize, CONST CHAR * _Format, ...);

	// Input
	_iobuf * Open(OpenFileMode _Mode, CONST CHAR * _Format, ...);
	_iobuf * Open(OpenFileMode _Mode, CONST WCHAR * _Format, ...);
	_iobuf * OpenFromFile(_iobuf * FILE, ULONG _Offset, ULONG _ElementSize, CONST CHAR * _Format, ...);
	_iobuf * OpenFromSource(UCHAR * _SrcBuf, ULONG _ElementSize, CONST CHAR * _Format, ...);

	// Output
	VOID CreateDummy(ULONG Size, CONST CHAR * _Format, ...);
	VOID CreateDummy(ULONG Size, CONST WCHAR * _Format, ...);
	VOID CreateDir(CONST CHAR * _Format, ...);
	VOID CreateDir(CONST WCHAR * _Format, ...);
	BOOL CreateFromSource(UCHAR * _SrcBuf, ULONG _ElementSize, CONST CHAR * _Format, ...);
	BOOL CreateFromSource(UCHAR * _SrcBuf, ULONG _ElementSize, CONST WCHAR * _Format, ...);
	BOOL CreateFromSource(_iobuf * FILE, ULONG _Offset, ULONG _ElementSize, CONST CHAR * _Format, ...);
	BOOL CreateFromSource(_iobuf * FILE, ULONG _Offset, ULONG _ElementSize, CONST WCHAR * _Format, ...);

	// Read
	UCHAR * Read(_iobuf * FILE, ULONG _Offset, PVOID _Buffer, ULONG _ElementSize);
	UCHAR * Read(_iobuf * FILE, ULONG _Offset, ULONG _ElementSize);

	// Write
	ULONG Write(_iobuf * FILE, ULONG _Offset, PVOID _Buffer, ULONG _ElementSize);

	// Size
	ULONG Size(_iobuf * FILE);
	ULONG Size(CONST CHAR * _Format, ...);
	ULONG Size(CONST WCHAR * _Format, ...);

	// Search
	ULONG Search(_iobuf * FILE, ULONG _Offset, PVOID _SrcBuf, ULONG _ElementSize);

	// Print
	ULONG Print(_iobuf * FILE, ULONG _Offset, CONST CHAR * _Format, ...);
	ULONG Print(_iobuf * FILE, ULONG _Offset, CONST WCHAR * _Format, ...);
	ULONG Print(_iobuf * FILE, CONST CHAR * _Format, ...);
	ULONG Print(_iobuf * FILE, CONST  WCHAR * _Format, ...);

	// Disk
	ULONG Align(ULONG nAlign, ULONG Value);	// needs to be moved to and expanded upon in Types
	VOID Align(ULONG nAlign, CONST CHAR * _Format, ...);
	VOID Align(ULONG nAlign, CONST WCHAR * _Format, ...);

};

// Text File
typedef struct tagConfigurationSettings {
	ULONG nLine;		// Total amount of Lines in Configuration File (*.ini)
	ULONG * Offset;		// Pointer to each Line
	ULONG * Length;		// Length of each Line (including any mix of 0x0D, 0x0A and/or 0x00)
	ULONG * StrLen;		// Length of each Line (excluding any mix of 0x0D, 0x0A and/or 0x00)
	ULONG * nArgs;		// Total amount of argument strings of each line
	UCHAR * Data;		// File Buffer
	ULONG _ElementSize;	// File Size
} Configuration, *pINI;
class System_Configuration_A :
	private System_String {
private:
	CHAR * Format(CONST CHAR * _Format, ...);
	WCHAR * Format(CONST WCHAR * _Format, ...);
	ULONG _StrLen;		// Temporary buffer for size of string from Format()	// (*2)-4 for size
public:

	// Boot
	System_Configuration_A(VOID);
	~System_Configuration_A(VOID);

	// Framework
	System_File * File;

	// Open
	pINI Open(CHAR * _FileName, ...);
	pINI Open(_iobuf * FILE, ULONG _Offset, ULONG _ElementSize);

	// Read
	CHAR * Arg(pINI INI, ULONG iLine, ULONG iArg);
	CHAR * Line(pINI INI, ULONG iLine);
	CHAR * Line(pINI INI, CHAR * Section, ULONG iLine);
	CHAR * Value(pINI INI, CHAR * Section, CHAR * Key);
	CHAR * Value(pINI INI, CHAR * Section, CHAR * Key, ULONG iArg);
	CHAR * Value(pINI INI, CHAR * Section, ULONG iLine, ULONG iArg);
	ULONG Find(pINI INI, ULONG iLine, CHAR * Key);
	ULONG SectionLine(pINI INI, CHAR * Section);

	// Write
	BOOL Extract(pINI INI, ULONG LineStart, ULONG LineFinish, CONST CHAR * _OutputFile, ...);

	// Cleanup
	VOID Close(pINI INI);

};
