#include "pch.h"


//전역변수:
HINSTANCE	_hInstance;
HWND		_hWnd;

ATOM		MyRegisterClass(HINSTANCE hInstance);
BOOL		InitInstance(HINSTANCE instance, int nCmdShow);
LRESULT		WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lparam);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow)
{
	// 1. 윈도우클래스를 등록
	MyRegisterClass(hInstance);

	// 2. 윈도우를 생성
	if (false == InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	// 3. 윈도우 메세지 루프
	MSG msg;
	while (GetMessage(&msg, nullptr, 0, 0))
	{
		::TranslateMessage(&msg);
		::DispatchMessage(&msg);
	}
}

ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEXW wcex;

	wcex.cbSize = sizeof(WNDCLASSEXW);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOWFRAME);
	wcex.lpszMenuName = nullptr;
	wcex.lpszClassName = _T("GameClient");
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION));

	return ::RegisterClassExW(&wcex);
}

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	_hInstance = hInstance;

	HWND hWnd = CreateWindowW(_T("GameClient"), _T("GameClient"), WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

	_hWnd = hWnd;

	if (!hWnd)
	{
		return FALSE;
	}

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}

int keyDownNum;
LRESULT WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CREATE:
		keyDownNum = 10;
		break;

	case WM_KEYDOWN:
		switch (wParam)
		{
		case '1':
		case VK_NUMPAD1:
			keyDownNum = 1;
			printf("1번키를 눌렀다.\n");
			::InvalidateRect(hWnd, nullptr, true);
			break;

		case '2':
		case VK_NUMPAD2:
			printf("2번키를 눌렀다.\n");
			keyDownNum = 2;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		case '3':
		case VK_NUMPAD3:
			printf("3번키를 눌렀다.\n");
			keyDownNum = 3;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		case '4':
		case VK_NUMPAD4:
			printf("4번키를 눌렀다.\n");
			keyDownNum = 4;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		case '5':
		case VK_NUMPAD5:
			printf("5번키를 눌렀다.\n");
			keyDownNum = 5;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		case '6':
		case VK_NUMPAD6:
			printf("6번키를 눌렀다.\n");
			keyDownNum = 6;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		case '7':
		case VK_NUMPAD7:
			printf("7번키를 눌렀다.\n");
			keyDownNum = 7;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		case '8':
		case VK_NUMPAD8:
			printf("8번키를 눌렀다.\n");
			keyDownNum = 8;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		case '9':
		case VK_NUMPAD9:
			printf("9번키를 눌렀다.\n");
			keyDownNum = 6;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		case '0':
		case VK_NUMPAD0:
			printf("0번키를 눌렀다.\n");
			keyDownNum = 0;
			::InvalidateRect(hWnd, nullptr, true);
			break;
		}
		break;

	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = ::BeginPaint(hWnd, &ps);

		if (keyDownNum == 0)
		{
			for (int i = 1; i <= 9; i++)
			{
				for (int j = 1; j <= 9; j++)
				{
					wstring str = format(L"{} x {} = {}", i, j, i * j);
					int x = 100 + ((i - 1) % 3) * 200;
					int y = 20 + ((i - 1) / 3) * 250;

					y += j * 20;
					::TextOut(hdc, x, y, str.c_str(), str.length());
				}
			}
		}
		else if (1 <= keyDownNum && keyDownNum <= 9)
		{
			for (int i = 1; i <= 9; i++)
			{
				wstring str = format(L"{} x {} = {}", keyDownNum, i, keyDownNum * i);
				//int x = 100 + ((i - 1) % 3) * 200;
				int y = 20;
				
				y += i * 20;
				::TextOut(hdc, 100, y, str.c_str(), str.length());
			}
		}

		::EndPaint(hWnd, &ps);
	}
	break;

	case WM_DESTROY:
		// 윈도우 종료 메세지가 왔을때 발생되는 이벤트
		::PostQuitMessage(0);
		break;

	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}

	return DefWindowProc(hWnd, message, wParam, lParam);
}