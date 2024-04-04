#include<iostream>
#include<conio.h>
void main()
{
    int i,n,j;
    std::cout<<"enter any number"<<std::endl;
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        std::cout<<j;
        std::cout<<std::endl;
    }
    getch();
}