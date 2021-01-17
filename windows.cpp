




















#include<windows.h>
int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpszCmdline, int nCmdShow)
{
	MessageBox(0,"title","text",0);
	MessageBox(0,"are you sure?","confirmation",MB_YESNO);
	return 0;
}
