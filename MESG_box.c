#include<windows.h>
#include<stdio.h>
int _stdcall WinMain(HINSTANCE hinstance, HINSTANCE hPrevinstance, LPSTR lpszCmdline,int nCmdShow){
char str[50];
sprintf(str,"%s",lpszCmdline);
int count=0,i=0;
while(str[i]!='\0')
{

    if(str[i]==' '){
        count++;
    }i++;
}
sprintf(str,"%d",count);
MessageBox(0,"Are you sure","Caption",MB_YESNO);
return 0;
}