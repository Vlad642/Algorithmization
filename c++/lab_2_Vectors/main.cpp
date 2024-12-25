#include <iostream>
#include "CalcProblemParams.cpp"
#include "FileWorker.cpp"
#include "CalcProblem.cpp"

using namespace std;

int main(int argc, char **argv)
{
    if (argc < 7)
    {
        cerr << "Not enough arguments! Required: 6 Entered: " << argc - 1 << '\n';
        return -1;
    }

    CalcProblemParams P(argv);
    FileWorker FW;
    vector<double> v1;
    vector<double> v2;

    try
    {
        v1 = FW.ReadFromFile(P.filePath1);
        v2 = FW.ReadFromFile(P.filePath2);
    }

    catch (const std::exception &)
    {
        cerr << "err reading file" << '\n';
    }

    CalcProblem CP;

    switch (*argv[6])
    {
    case char(Operations::vv_sum):
        try
        {
            FW.WriteToFile(CP.VectorSum(v1, v2));
        }
        catch (const std::exception &e)
        {
            cerr << "err writing file" << '\n';
        }
        break;
    case char(Operations::vv_subtr):
        try
        {
            FW.WriteToFile(CP.VectorSubtr(v1, v2));
        }
        catch (const std::exception &e)
        {
            cerr << "err writing file" << '\n';
        }
        break;
    case char(Operations::vv_scmult):
        try
        {
            FW.WriteToFile(CP.VectorScalarMult(v1, v2));
        }
        catch (const std::exception &e)
        {
            cerr << "err writing file" << '\n';
        }
        break;
    default:
        cerr << "Unknown operation!" << '\n';
        return -1;
    }
}