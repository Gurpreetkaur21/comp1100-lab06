#include<iostream>
int main()
{
    int x=100;
    std::cout<<"Enter the value of x";
    std::cin>>x;
     if (x>=86)
    std::cout<< "grade A";
    else if (x>=72)
    std::cout<< "grade B";
    else if (x>=60)
    std::cout<< "grade c";
    else if (x>=50)
    std::cout<< "grade D";
    else 
    std::cout<< "grade F";
}