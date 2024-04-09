#include<iostream>
#include<conio.h>
void main()
{
    int i,j;
    for(i=9;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        std::cout<<j<<" ";
        std::cout<<std::endl;
    }
    getch();
}