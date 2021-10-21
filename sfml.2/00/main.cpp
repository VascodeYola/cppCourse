#include <iostream>

int main()
{
    // цикл выводит числа от 1 до 100

    // условие: пока num меньше или равно 100
    for (int num = 1; num <= 100; num += 1)
    {
        //  - если число кратно и 3, и 5, вывести FizzBuzz
        if ((num % 3 == 0) && (num % 5 == 0))
        {
            std::cout << "FizeBuzz" << std::endl;
        }
        //  - иначе если число кратно 3, вывести Fizz
        else if (num % 3 == 0)
        {
            std::cout << "Fize" << std::endl;
        }
        //  - иначе если число кратно 5, вывести Buzz
        else if (num % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;
        }
        //  - иначе вывести число
        else
        {
            std::cout << num << std::endl;
        }
    }
}