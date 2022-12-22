#include <windows.h>
#include <string.h>
#include <stdlib.h>

#include "Handlers\winCC.h"

//La creación de la clases de ventanas y las ventanas debe de ir en un .c aparte
//La creación de Procedures de ventanas y mensajes debe de ir en un .c aparte

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst,LPSTR args, int ncmdshow)
{
    strcpy(main_class,"main");

    if(!ClassCreation(hInstance))
    {
        return FALSE;
    }
    MSG msg = {0};

    CreateFirstWindow();

    while (GetMessage(&msg,NULL,NULL,NULL))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

/* Preguntas

¿Por qué abre otro windows.h?, tengo que modificar mi windows.h para que esté igual al de yorman?

    Existe windows.h Api y el handler de Windows.c, no te confundas y crea el tuyo propio

    ¿Por qué no me funciona el strcpy main_class si está declarado con main_class?
    

¿Cuál es la función o parte que genera el .exe?
    
    Simplemente no compilaba el programa por errores y no se generaba el .exe
*/