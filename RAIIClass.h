#pragma once
#include "stdafx.h"
#include "TNotCopyable.h"

class TClosingFile //RAII
{
	TNotCopyable & Pointer;
public:
	TClosingFile(TNotCopyable& ptr) :Pointer (ptr)
	{
	}
	~TClosingFile()
	{
		Pointer.Close();
	}
};
