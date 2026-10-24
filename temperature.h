#pragma once
#include <string>

struct TempArgs {
    static const std::string C;
    static const std::string F;
    static const std::string K;
};


class TempConvert
{
public:
    static float convert(const std::string& from, const std::string& to, float val);

private:
    static float C_to_F(float C);
    static float F_to_C(float F);
    static float C_to_K(float C);
    static float K_to_C(float K);
};