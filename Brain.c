#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Handlers/winCC.h"

LRESULT CALLBACK WindowProcedure(HWND hWnd,UINT msg,WPARAM wp,LPARAM lp)
{
    switch(msg)
    {
        case WM_DESTROY:
        {
            PostQuitMessage(0);
            break;
        }
        default:
        DefWindowProcW(hWnd,msg,wp,lp);
    }
}
