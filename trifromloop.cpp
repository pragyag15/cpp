#include<iostream>
#include<conio.h>
void main()
{
    int a,b,c,d;
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=9-a;b++)
        std::cout<<"  ";
        for(c=1;c<=a;c++)
        std::cout<<c;
        for(d=a-1;d>0;d--)
        std::cout<<d;

        std::cout<<std::endl;
    }
    getch();
}