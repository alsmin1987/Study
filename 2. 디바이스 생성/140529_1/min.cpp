
#include <Windows.h>
#include <d3d9.h>
#include <d3d9x.h>
#pragma comment( lib, "d3d9.lib")
#pragma comment( lib, "d3d9.lib")

INT WINAPI WinMain( HINSTANCE hInst, HINSTANCE, LPSTR, INT)
{
	// 윈도우 클래스 등록
	WNDCLASSEX wc = {sizeof(WNDCLASSEX), CS_CLASSDC, MsgProc, 0L, 0L, 
		GetModuleHandle(NULL), NULL, NULL, NULL, NULL, "D3D Tutorial", NULL };
	wc.
	RegisterClassEx(&wc);

}
