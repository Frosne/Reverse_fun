#include "main.h"
#include <iostream>
#include <windows.h>

//https://www.apriorit.com/dev-blog/367-anti-reverse-engineering-protection-techniques-to-use-before-releasing-software

void first()
{
	if (IsDebuggerPresent())
    {
        std::cout << "Stop debugging program!" << std::endl;
        exit(-1);
    }
}

int main()
{
	first();
    return 0;
}