#include <vector>
#include <string>

#include "Operations.cpp"

struct CalcProblemParams
{
    CalcProblemParams(char **argv) 
    {
        filePath1 = argv[2];
        filePath2 = argv[4];
    }
    std::string filePath1;
    std::string filePath2;
    // std::vector<std::string> filepaths;
    Operations op;
};