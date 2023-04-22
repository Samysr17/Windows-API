#include<windows.h>
#include<stdio.h>
int _stdcall WinMain(HINSTANCE hinstance,HINSTANCE hPrevinstance,LPSTR lpcszCmdline,int nCmdShow){
char str[10];
    int num=5;
    int f=1;
    for(int i=num;i>=1;i--){
      f=f*(i);
    }
    sprintf(str,"Factorial of %d is %d",num,f);
    MessageBox(0,str,"Factorial",MB_OK);
    return 0;
}
 