/*
 * Course: C++ Programming: Object-Oriented Design
 * Completion Time: 1.1 hr, 29 October 2025.
 * Code written by Charles Underwood
 * Compiled using GCC: g++ ood.cpp -o odd
 * Using the course structure, I wrote my own code.
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class CPU {
    public:
        string name;
        bool x3d_cache;
        bool integrated_gpu;
        int core_count;
        int thread_count;
        double max_freq; // In GHz
        double min_freq; // In GHz
        double default_TDP; // In Watts
        double tj_max; // In degree celsius
        string generation; // E.g. Zen 3
        string code_name; // E.g. Vermeer
        string socket;
        string node;
        void vendor(string x);
        void profile(string name, int core_count, int thread_count, double min_freq, double max_freq, double default_TDP, double tj_max) {
            cout << "The " << name << " is a " << core_count << " core, " << thread_count << " thread CPU, operating from " << endl;
            cout << min_freq << " GHz up to " << max_freq << " GHz with a default TDP of " << default_TDP << " Watts and a max temperature of " << endl;
            cout << tj_max << " degrees celsius." << endl;
        };
        void setISA(string vendor_isa) {
            isa = vendor_isa;
        }
        string getISA(string vendor) {
            return isa;
        }
        friend void is_x86(string vendor);
    private:
        string isa; // E.g. EM64T or AMD64.
    protected:
        bool x86;
};

void CPU::vendor(string x) {
    cout << "The vendor is " << x << "." << endl;
}

void is_x86(string vendor) {
    if (vendor == "AMD") {
        cout << "Yes, AMD is an x86 vendor." << endl;
    } else if (vendor == "Intel") {
        cout << "Yes, Intel is an x86 vendor." << endl;
    } else {
        cout << "No, " << vendor << " is not an x86 vendor." << endl;
    };
    cout << " " << endl;
}

int main () {

    // Get timestamp for current date and time
    time_t timestamp;
    time(&timestamp);
    cout << "As of " << ctime(&timestamp) << endl;

    CPU r7_5800_x3d;
    r7_5800_x3d.name = "Ryzen 7 5800X3D";
    r7_5800_x3d.x3d_cache = true;
    r7_5800_x3d.integrated_gpu = false;
    r7_5800_x3d.core_count = 8;
    r7_5800_x3d.thread_count = 16;
    r7_5800_x3d.max_freq = 4.5;
    r7_5800_x3d.min_freq = 3.4;
    r7_5800_x3d.default_TDP = 105;
    r7_5800_x3d.tj_max = 90.0;
    r7_5800_x3d.generation = "Zen 3";
    r7_5800_x3d.code_name = "Vermeer";
    r7_5800_x3d.socket = "AM4";
    r7_5800_x3d.node = "TSMC 7nm FinFET";
    r7_5800_x3d.vendor("AMD");
    r7_5800_x3d.profile(r7_5800_x3d.name, r7_5800_x3d.core_count, r7_5800_x3d.thread_count,
        r7_5800_x3d.min_freq, r7_5800_x3d.max_freq, r7_5800_x3d.default_TDP, r7_5800_x3d.tj_max);
    r7_5800_x3d.setISA("AMD64");
    r7_5800_x3d.getISA("AMD");
    is_x86("AMD");

    CPU i7_14900k;
    i7_14900k.name = "i7 14900k";
    i7_14900k.x3d_cache = false;
    i7_14900k.integrated_gpu = true;
    i7_14900k.core_count = 24;
    i7_14900k.thread_count = 32;
    i7_14900k.max_freq = 6.0;
    i7_14900k.min_freq = 2.4;
    i7_14900k.default_TDP = 125;
    i7_14900k.tj_max = 100.0;
    i7_14900k.generation = "14th gen";
    i7_14900k.code_name = "Raptor Lake";
    i7_14900k.socket = "FCLGA 1700";
    i7_14900k.node = "Intel 7"; // AKA 10nm Enhanced SuperFin process.
    i7_14900k.vendor("Intel");
    i7_14900k.profile(i7_14900k.name, i7_14900k.core_count, i7_14900k.thread_count,
        i7_14900k.min_freq, i7_14900k.max_freq, i7_14900k.default_TDP, i7_14900k.tj_max);
    i7_14900k.setISA("EM64T");
    i7_14900k.getISA("Intel");
    is_x86("Intel");

    return 0;

}
