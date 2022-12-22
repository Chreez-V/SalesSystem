#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#include "../Handlers/winCC.h"
#include "../Handlers/Brain.h"


BOOL ClassCreation(HINSTANCE hInstance)
{
    WNDCLASSW wc = {0};
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL,IDC_ARROW);
    wc.hInstance = hInstance;
    wc.lpszClassName = L"FirstWindow";
    wc.lpfnWndProc = WindowProcedure;

    if(!RegisterClassW(&wc))
    {
        return FALSE;
    }

    return TRUE;
}

/*CreateWindowW(lpClassName,lpWindowName,dwStyle,x,y,nWidth,nHeight,hWndParent,
        hMenu,hInstance,lpParam)*/

void CreateFirstWindow()
{
    CreateWindowW(L"FirstWindow",L"LET'S GOOOOOOOOOOOOOOOOOO!!!!!",WS_OVERLAPPEDWINDOW  | WS_VISIBLE,100,100,500,500,NULL,NULL,NULL,NULL);
}