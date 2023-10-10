#pragma once
#include <string>
using namespace std;
class Exception
{
protected:
	char message[100];
public:
	Exception(const char* s) { strcpy_s(message,strlen(s), s); }
	virtual void GetMessage() const;
};
class ArraySizeException : public Exception {
public:
	ArraySizeException(const char* s) : Exception(s) {}
	void GetMessage() const;
};
class ArrayDataException : public Exception {
	int ia, ja;
public:
	ArrayDataException(const char* s, int i, int j) : Exception(s) { ia = i; ja = j; };
	void GetMessage() const;
};
