#include <iostream>
#include <string>

void getInput(std::string txt, int* var)
{
    std::cout << txt;
    int tmp = 0;
    std::cin >> tmp;
    *var = tmp;
}

int main()
{
    int startingNumber = 1;
    int input = 0;

    getInput("Startnumber: ", &startingNumber);
    int count = startingNumber;
    
    std::cout << std::endl;
    while (true)
    {
        getInput("Count! -> ", &input);
        if (input == count)
        {
            count++;
            continue;
        }
        else
        {
            count = startingNumber;
            system("cls");
            std::cout << "You failed to count... TRY AGAIN! :)\n";
            std::cout << "Startnumber: " << startingNumber << std::endl;

            std::cout << std::endl;
        }
    }
}
