#pragma once
#include <string>

struct WeightArgs {
    static const std::string kg;
    static const std::string g;
    static const std::string ounces;
    static const std::string pounds;
};

class WeightConvert {
public:
    static float convert(const std::string& from, const std::string& to, float val);

private:
    static float kg_to_g(float kg);
    static float kg_to_pounds(float kg);
    static float g_to_ounces(float g);
    static float ounces_to_g(float ounces); // Та самая функция, которой не хватало!
};