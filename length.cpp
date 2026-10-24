#include "length.h"
#include <stdexcept>

const std::string LengthArgs::km = "km";
const std::string LengthArgs::m = "m";
const std::string LengthArgs::cm = "cm";
const std::string LengthArgs::mm = "mm";

float LengthConvert::convert(const std::string& from, const std::string& to, float val) {
    if (from == LengthArgs::km && to == LengthArgs::m) return km_to_m(val);
    if (from == LengthArgs::m && to == LengthArgs::cm) return m_to_cm(val);
    if (from == LengthArgs::cm && to == LengthArgs::mm) return cm_to_mm(val);
    if (from == LengthArgs::mm && to == LengthArgs::cm) return mm_to_cm(val);
    
    throw std::invalid_argument("Unknown conversion: " + from + " -> " + to);
}

float LengthConvert::km_to_m(float km) { return km * 1000.0f; }
float LengthConvert::m_to_cm(float m) { return m * 100.0f; }
float LengthConvert::cm_to_mm(float cm) { return cm * 10.0f; }
float LengthConvert::mm_to_cm(float mm) { return mm / 10.0f; }