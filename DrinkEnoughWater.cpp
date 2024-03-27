#include <iostream>
#include <Windows.h>

#define input(msg,var) std::cout << msg; std::cin >> var

std::string sound;
DWORD interval = 900000; // ms / milliseconds

int main()
{
    input("Set the interval (default: 900.000): ", interval);
    std::cout << "Sounds in Registry in \"Computer\\HKEY_CURRENT_USER\\AppEvents\\Schemes\\Apps\\.Default\\\"\n";
    input("Set the System-sound (default: Notification.Mail): ", sound);
    std::cout << std::endl;

    std::wstring stemp = std::wstring(sound.begin(), sound.end());
    LPCWSTR convSound = stemp.c_str();


    unsigned int count = 0;
    while (true)
    {
        std::cout << "Drink some water! (" << ++count << ")\n";
        PlaySoundW(convSound, NULL, SND_ASYNC);
        Sleep(interval);
    }
}
