#include <vector>
#include <iostream>

class CalcProblem
{
public:
    std::vector<double> VectorSum(std::vector<double> v1, std::vector<double> v2)
    {
        if (dimensionCheck(v1, v2))
        {
            std::vector<double> v_result;
            for (int i = 0; i < v1.size(); i++)
            {
                v_result.push_back(v1[i] + v2[i]);
            }
            return v_result;
        }
    }

    std::vector<double> VectorSubtr(std::vector<double> v1, std::vector<double> v2)
    {
        if (dimensionCheck(v1, v2))
        {
            std::vector<double> v_result;
            for (int i = 0; i < v1.size(); i++)
            {
                v_result.push_back(v1[i] - v2[i]);
            }
            return v_result;
        }
    }

    double VectorScalarMult(std::vector<double> v1, std::vector<double> v2)
    {
        if (dimensionCheck(v1, v2))
        {
            double result;
            for (int i = 0; i < v1.size(); i++)
            {
                result += v1[i] * v2[i];
            }
            return result;
        }
    }

private:
    bool dimensionCheck(std::vector<double> v1, std::vector<double> v2)
    {
        if (v1.size() != v2.size())
        {
            std::cout << "different vector's dimensions" << '\n';
            return false;
        }
        return true;
    }
};