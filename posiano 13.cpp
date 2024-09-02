
#include <iostream>  

int main()
{
    int n;
    std::cout << "Enter a positive integer: ";  
    std::cin >> n;

    std::cout << "Divisors: ";
    for (int i = 1; i <= n; i++)  
    {
        if (n % i == 0)
        {
            std::cout << "\n" << i;
        }
    }

    return 0;  
}
