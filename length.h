#pragma once
#include <string>

struct LengthArgs {
    static const std::string km;
    static const std::string m;
    static const std::string cm;
    static const std::string mm;
};

class LengthConvert {
public:
    static float convert(const std::string& from, const std::string& to, float val);

private:
    static float km_to_m(float km);
    static float m_to_cm(float m);
    static float cm_to_mm(float cm);
    static float mm_to_cm(float mm);
};