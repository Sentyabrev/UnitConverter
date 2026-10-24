#include "weight.h"

const std::string WeightArgs::kg = "kg";
const std::string WeightArgs::g = "g";
const std::string WeightArgs::ounces = "oz";
const std::string WeightArgs::pounds = "lb";

float WeightConvert::convert(const std::string& from, const std::string& to, float val) {
    if (from == WeightArgs::kg && to == WeightArgs::g) return kg_to_g(val);
    if (from == WeightArgs::kg && to == WeightArgs::pounds) return kg_to_pounds(val);
    if (from == WeightArgs::g && to == WeightArgs::ounces) return g_to_ounces(val);
    if (from == WeightArgs::ounces && to == WeightArgs::g) return ounces_to_g(val);
    
    return 0.0f;
}

float WeightConvert::kg_to_g(float kg) { return kg * 1000.0f; }
float WeightConvert::kg_to_pounds(float kg) { return kg * 2.20462f; }
float WeightConvert::g_to_ounces(float g) { return g * 0.035274f; }
float WeightConvert::ounces_to_g(float ounces) { return ounces * 28.3495f; }