#include <iostream>

int main()
{
    int num1,num2;
    std :: cout << "enter two numbers :" <<std :: endl;
    std :: cin >> num1 >> num2 ;
    for (int i = num1; i <= num2 ; ++i) {
        std :: cout << i << std ::endl;
    }
    return 0;
}