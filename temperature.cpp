#include "temperature.h"

const std::string TempArgs::C = "C";
const std::string TempArgs::F = "F";
const std::string TempArgs::K = "K";

float TempConvert::convert(const std::string& from, const std::string& to, float val) {
    if (from == TempArgs::C && to == TempArgs::F) return C_to_F(val);
    if (from == TempArgs::F && to == TempArgs::C) return F_to_C(val);
    if (from == TempArgs::C && to == TempArgs::K) return C_to_K(val);
    if (from == TempArgs::K && to == TempArgs::C) return K_to_C(val);

    return 0.0f;
}

float TempConvert::C_to_F(float C) { return C * 9.0f / 5.0f + 32.0f; }
float TempConvert::F_to_C(float F) { return (F - 32.0f) * 5.0f / 9.0f; }
float TempConvert::C_to_K(float C) { return C + 273.15f; }
float TempConvert::K_to_C(float K) { return K - 273.15f; }