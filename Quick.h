#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Quick
{
    std::vector<double> vec;
    int liczba{0};
    std::string plik;

    public:
    Quick();
    ~Quick();

    void implement_random(std::string plik);

    std::vector<double> get_data(std::string);

    void quick_sort(std::vector<double> vec, int, int);

    void set_data(std::vector<double> vec, std::string, int);

    void display_quick_sort(const std::vector<double>& vec, const std::string& text);
};
