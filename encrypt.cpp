#include <fstream>
#include <iostream>

void readFile(char name[])
{
    std::ifstream file(name, std::ios::binary);
    if (!file)
    {
        std::cerr << "Could not open file\n";
        return;
    }

    char bytes[16];
    for (int i = 0; i < 16; i++)
    {
        file.get(bytes[i]);
    }

    if (file)
    {
        for (int i = 0; i < 16; i++)
        {
            std::cout << "Read bytes: " << std::hex << (unsigned int)(unsigned char)bytes[i] << "\n";
        }
    }
    else
    {
        std::cout << "Failed to read bytes\n";
    }
}
int main()
{
    readFile("very_important_pdf.pdf");
}