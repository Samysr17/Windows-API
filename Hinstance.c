#include<windows.h>
#include<stdio.h>
int _stdcall WinMain(HINSTANCE hinstance,HINSTANCE hPrevinstance,LPSTR lpcszCmdline,int nCmdShow){
char str[10];
    sprintf(str,"HINSTANCE value:%d",hinstance);
    MessageBox(0,str,"Title",MB_ABORTRETRYIGNORE);
    return 0;
}
 