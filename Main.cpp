#include "stdafx.h"
#include "TNotCopyable.h"
#include "TClosingFIle.h"
#include <iostream>

int main()
{
	try
	{
		TNotCopyable obj;

		TClosingFile ptr(&obj);

		obj.OpenToWrite("someFile.txt");

		obj.OpenToRead("someOtherFile.txt");

		obj.Close();
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	system("pause");
	return 0;
}
