#include <iostream>
#include <fstream>

void replace(std::string filename, std::string oldString, std::string newString)
{
    std::fstream filein(filename.c_str(), std::ios::in);
    if (!filein.is_open())
    {
        std::cerr << "File doesn't exist." << std::endl;
        return;
    }

    filename.append(".replace");
    std::fstream fileout(filename.c_str(), std::ios::out);
    if (!fileout.is_open())
    {
        std::cerr << "Cannot create .replace file." << std::endl;
        filein.close();
        return;
    }

    std::string line;
    while (std::getline(filein, line))
    {
        std::string modifiedLine;
        size_t pos = 0, found;
        
        while ((found = line.find(oldString, pos)) != std::string::npos)
        {
            modifiedLine.append(line.substr(pos, found - pos));
            modifiedLine.append(newString);
            pos = found + oldString.length();
        }
        modifiedLine.append(line.substr(pos));
        
        fileout << modifiedLine << std::endl;
    }

    filein.close();
    fileout.close();
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: ./replace filename oldString newString" << std::endl;
        return 1;
    }

    replace(av[1], av[2], av[3]);
    return 0;
}
