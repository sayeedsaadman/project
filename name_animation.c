#include<stdio.h>
#include<windows.h>
#include<conio.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int a,b,t=100;

   //S
    for(a=5,b=15;b<=17;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=5,b=15;a<=10;a++)
    {
       gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=5,b=17;a<=10;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=10,b=17;b<=19;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=10,b=19;a>=5;a--)
    {
         gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    //A
    for(a=14,b=15;b<=19;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=14,b=15;a<=18;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=14,b=17;a<=18;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=18,b=15;b<=19;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    //Y
    for(a=22,b=15;b<=17;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=26,b=15;b<=17;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=22,b=17;a<=26;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=24,b=17;b<=19;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }


    //E
    for(a=30,b=15;b<=19;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=30,b=15;a<=35;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=30,b=17;a<=33;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=30,b=19;a<=35;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }

    //E
    for(a=39,b=15;b<=19;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=39,b=15;a<=44;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=39,b=17;a<=42;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=39,b=19;a<=44;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    //D
    for(a=48,b=15;b<=19;b++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=48,b=15;a<=51;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=53,b=18;b>=16;b--)
    {
       gotoxy(a,b);
        printf("*");
        Sleep(t);
    }
    for(a=48,b=19;a<=51;a++)
    {
        gotoxy(a,b);
        printf("*");
        Sleep(t);
    }

    getch();
}
