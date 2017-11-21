#include "TablePrinter.h"
#include <windows.h>
int main()
{
	
	for (int i = 0; i < 10000000000; i++)
	{
		system("cls");
		TablePrinter ct("²âÊÔ", 2, 2, "");
		ct.SetColHeader(0, "col1")
			.SetColHeader(1, "Col2's header is very long")
			.SetHaveLineDiv(true).SetHaveLineNumber(false);
		ct.Print(i);
		ct.Print(i*i);
		ct.Print(i*2);
		ct.Print(i*i);
		Sleep(1000);
	}
	
	getchar();
	return 0;
}