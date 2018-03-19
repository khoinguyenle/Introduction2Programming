#ifndef _COLORDISPLAY_H_INCLUDED
#define _COLORDISPLAY_H_INCLUDED

#include <windows>
#include <thread>
#include <chrono>


    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    auto end = std::chrono::high_resolution_clock::now();

class ColorDisplay {
    public:

    private:

};

#endif // COLORDISPLAY_H_INCLUDED


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {3, 6};
    SetConsoleCursorPosition(hConsole, pos);
    WriteConsole(hConsole, "Hello", 5, NULL, NULL);
