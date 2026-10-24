#include <iostream>
#include <string>

#include "temperature.h"
#include "weight.h"
#include "length.h"

using namespace std;

struct convertors {
    static const string temperature;
    static const string weight;
    static const string length;
};

const string convertors::temperature = "temperature";
const string convertors::weight = "weight";
const string convertors::length = "length";

int main(int argc, char* argv[]) {
    if (argc != 5) {
        cerr << "Usage: converter <type> <value> <from> <to>" << endl;
        return 1;
    }

    try {
        string conv_cls = argv[1];
        float val = stof(argv[2]);
        string from = argv[3];
        string to = argv[4];

        if (conv_cls == convertors::temperature) {
            cout << TempConvert::convert(from, to, val) << endl;
        }
        else if (conv_cls == convertors::weight) {
            cout << WeightConvert::convert(from, to, val) << endl;
        }
        else if (conv_cls == convertors::length) {
            cout << LengthConvert::convert(from, to, val) << endl;
        }
        else {
            cerr << "Unknown converter type: " << conv_cls << endl;
            return 1;
        }
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}