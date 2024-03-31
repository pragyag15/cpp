#include<iostream>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9-i;j++)
        std::cout<<" ";
        for(int k=1;k<=i;k++)
        std::cout<<k<<" ";
        std::cout<<std::endl;

    }
    for(i=8;i>=1;i--)
    {
        for(j=9-i;j>=1;j--)
        std::cout<<" ";
        for(int k=1;k<=i;k++)
        std::cout<<k<<" ";
        std::cout<<std::endl;

    }   
    getch(); 
}