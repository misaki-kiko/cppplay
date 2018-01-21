#include <iostream>

int main()
{
    int num1,num2;
    int mid=0;

    std :: cout << "enter two numbers :" << std :: endl;
    std :: cin >> num1 >> num2 ;

    if (num1>num2)
    {
        mid=num2;
        num2=num1;
        num1=mid;
    }

    while (num1<=num2)
    {
        std :: cout << num1 <<std :: endl ;
        num1++;
    }


    return 0;
}