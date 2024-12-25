#include <vector>
#include <fstream>
#include <iostream>

class FileWorker
{
    std::fstream file;
public:
    std::vector<double> ReadFromFile(std::string fileName)
    {
        std::vector<double> v;
        file.open(fileName);
        if (!file.is_open())
            throw std::runtime_error("Unable to read file");
        double number;

        while (file >> number)
        {
            v.push_back(number);
        }

        file.close();

        return v;
    }

    void WriteToFile(std::vector<double> res, std::string outfileName = "log.txt")
    {
        file.open(outfileName,std::ios::out);
        if (!file.is_open())
            std::runtime_error("Unable to write in file");
        for (double num : res)
        {
            file << num << ' ';
        }
        file.close();
    }

    void WriteToFile(double res, std::string outfileName = "log.txt")
    {
        file.open(outfileName,std::ios::out);
        if (!file.is_open())
            std::runtime_error("Unable to write in file");
        file << res;
        file.close();
    }

// private:
//     void operationHelper()
//     {
//     }
};