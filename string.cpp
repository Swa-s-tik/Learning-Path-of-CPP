#include <iostream>
#include <string>

int main() {
    // std::string
    std::string stdString = "Hello, std::string!";
    std::cout << "std::string: " << stdString << std::endl;

    // C-style strings (char*)
    const char* cStyleString = "Hello, C-style string!";
    std::cout << "C-style string: " << cStyleString << std::endl;

    // std::wstring
    std::wstring wideString = L"Hello, std::wstring!";
    std::wcout << "std::wstring: " << wideString << std::endl;

    return 0;
}
