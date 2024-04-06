#include<iostream>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        std::cout<<i<<" ";
        std::cout<<std::endl;
    }
    getch(); 
}