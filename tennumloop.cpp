#include<iostream>
#include<conio.h>
void main()
{
    int i,s=0;
    float a[20];
    std::cout<<"enter 10 elements"<<std::endl;
    for(i=0;i<10;i++)
    {
        std::cin>>a[i];
        s+=a[i];
    }
    std::cout<<"list 10 elements"<<std::endl;
    for(i=0;i<10;i++)
    std::cout<<a[i]<<std::endl;
    std::cout<<"sum 10 elements="<<s<<std::endl;
    getch();

}