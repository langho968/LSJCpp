#include "pch.h"
#include "CommonFunction.h"

namespace Draw
{
	void Text(HDC hdc, int x, int y, wstring str)
	{
		::TextOut(hdc, x, y, str.c_str(), str.length());
	}
	void Rectangle(HDC hdc, int x, int y, int width, int height)
	{
		::Rectangle(hdc, x - width / 2, y - height / 2, x + width / 2, y + height / 2);
	}
	void Ellipse(HDC hdc, int x, int y, int width, int height)
	{
		::Ellipse(hdc, x - width / 2, y - height / 2, x + width / 2, y + height / 2);
	}
}

namespace Collision
{
	bool PtInRect(POINT pt, RECT rc)
	{
		if (rc.left <= pt.x && pt.x <= rc.right)
		{
			if (rc.top <= pt.y && pt.y <= rc.bottom)
			{
				return true;
			}
		}
		return false;
	}
	
}