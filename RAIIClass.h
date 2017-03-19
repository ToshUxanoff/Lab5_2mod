#include "stdafx.h"
#include "TNotCopyable.h"
class TClosingFile //RAII
{
	TNotCopyable * Descriptor;
public:
	TClosingFile(TNotCopyable* ptr)
	{
		Descriptor = ptr;
	}
	~TClosingFile()
	{
		Descriptor->Close();
	}
};
