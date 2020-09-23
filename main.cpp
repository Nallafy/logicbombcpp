#include <windows.h>
#include <iostream>

using namespace std ;

int main()
{
    char ownPth[MAX_PATH];

    // When NULL is passed to GetModuleHandle, the handle of the exe itself is returned
    HMODULE Handler = GetModuleHandle(NULL);
    cout << Handler;
//    if (Handler != NULL)
//    {
//        // Use GetModuleFileName() with module handle to get the path
//        GetModuleFileName(Handler, ownPth, (sizeof(ownPth)));
//       // cout << ownPth << endl ;
//        system("PAUSE");
//        return 0;
//    }
//    else
//    {
//        cout << "Module handle is NULL" << endl ;
//        system("PAUSE");
//        return 0;
//    }

return 0;
}