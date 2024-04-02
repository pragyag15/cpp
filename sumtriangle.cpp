#include<iostream>
#include<conio.h>
#include<iomanip>
void main()
{
    int a[10][10],i,j,r,c,s=0;
    std::cout<<"enter the no. of rows"<<std::endl;
    std::cin>>r;
    std::cout<<"enter the no. of columns"<<std::endl;
    std::cin>>c;
    std::cout<<"enter the " <<r*c<< "elements" <<std::endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        std::cin>>a[j][i];
    }
    s=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        s+=a[i][j];
        std::cout<<std::setw(6)<<a[i][j];
        std::cout<<std::endl;       
    }
    getch();

}