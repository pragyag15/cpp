#include<iostream>
#include<conio.h>
#include<process.h>

void main()
{
    int rows;
    zozo:
    std::cout<<"Enter number of rows: ";
    std::cin>>rows;
    int i,j;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        std::cout<<j<<" ";
        std::cout<<std::endl;

    }
    char l;
    momo:
    std::cout<<std::endl<<"Do you want to continue Y/N: ";
    std::cin>>l;
    if(l=='Y' || l=='y')
    goto zozo;
    else if (l=='N' || l=='n')
    exit(0);
    else std::cout<<"Wrong input"<<std::endl;
    goto momo;


}