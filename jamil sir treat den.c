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
    int a,b,t=50;
//J
for(a=5,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=5,b=10;a>=2;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=2,b=10;b>=9;b--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//A
for(a=8,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=12,b=5;a>=8;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=12,b=10;b>=5;b--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=12,b=8;a>=8;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}

//M
for(a=15,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
gotoxy(16, 5);
    printf("*");
    Sleep(50);
 gotoxy(17, 6);
    printf("*");
    Sleep(50);
    gotoxy(18,7);
    printf("*");
    Sleep(50);
    gotoxy(19,6);
    printf("*");
    Sleep(50);
    gotoxy(20,5);
    printf("*");
    Sleep(50);
for(a=21,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}


//I
for(a=23,b=5;a<=27;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=25,b=10;b>=5;b--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=27,b=10;a>=23;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//L
for(a=29,b=10;b>=5;b--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=34,b=10;a>=29;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//S
for(a=38,b=5;a<=42;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=38,b=5;b<=7;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=38,b=7;a<=42;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=42,b=7;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=42,b=10;a>=38;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//I
for(a=44,b=5;a<=49;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=46,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=44,b=10;a<=49;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//R
for(a=51,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=56,b=5;a>=51;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=51,b=7;a<=56;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=56,b=5;b<=7;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
 gotoxy(53, 8);
    printf("*");
    Sleep(50);
    gotoxy(54,9);
    printf("*");
    Sleep(50);
    gotoxy(55,10);
    printf("*");
    Sleep(50);

//T
for(a=60,b=5;a<=64;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=62,b=10;b>=5;b--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//R
for(a=66,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=70,b=5;a>=66;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=66,b=7;a<=70;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=70,b=5;b<=7;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
 gotoxy(68, 8);
    printf("*");
    Sleep(50);
    gotoxy(69,9);
    printf("*");
    Sleep(50);
    gotoxy(70,10);
    printf("*");
    Sleep(50);

//E
for(a=72,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=72,b=5;a<=76;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=72,b=7;a<=74;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=72,b=10;a<=76;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//A
for(a=78,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=82,b=5;a>=78;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=82,b=10;b>=5;b--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=82,b=8;a>=78;a--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}

//T
for(a=84,b=5;a<=88;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=86,b=10;b>=5;b--)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//D
for(a=92,b=5;a<=95;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=92,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=92,b=10;a<=95;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=96,b=6;b<=9;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//E
for(a=98,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=98,b=5;a<=102;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=98,b=7;a<=100;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
for(a=98,b=10;a<=102;a++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
//N
for(a=104,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}
 gotoxy(105, 6);
    printf("*");
    Sleep(50);
    gotoxy(106,7);
    printf("*");
    Sleep(50);
    gotoxy(107,8);
    printf("*");
    Sleep(50);
    gotoxy(108, 9);
    printf("*");
    Sleep(50);
    gotoxy(109,10);
    printf("*");
    Sleep(50);

for(a=109,b=5;b<=10;b++)
{
    gotoxy(a,b);
    printf("*");
    Sleep(t);
}

gotoxy(20,20);
printf("                                ***************          \n");Sleep(500);
gotoxy(20,21);
printf("                              *******************          \n");Sleep(500);
gotoxy(20,22);
printf("                            ***********************          \n");Sleep(500);
gotoxy(20,23);
printf("                          *****O***************O*****          \n");Sleep(500);
gotoxy(20,24);
printf("                         ******|***************|******          \n");Sleep(500);
gotoxy(20,25);
printf("                        *******|******--*******|*******          \n");Sleep(500);
gotoxy(20,26);
printf("                        *******|***************|*******          \n");Sleep(500);
gotoxy(20,27);
printf("                         ******|***************|******          \n");Sleep(500);
gotoxy(20,28);
printf("                          **********       ***********          \n");Sleep(500);
gotoxy(20,29);
printf("                           *******           ********          \n");Sleep(500);
gotoxy(20,30);
printf("                                                ******           *******          \n");Sleep(500);
gotoxy(20,31);
printf("                                                 ********************          \n");Sleep(500);
gotoxy(20,32);
printf("                                                  ******************          \n");Sleep(500);











getch();
}

