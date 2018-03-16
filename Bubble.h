#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bubble 
{
    std::vector<double> vec;
    std::vector<double> vec_sorted;
    int liczba{0};
    std::string plik;
    
    public:
     Bubble(){};
    ~Bubble(){};
    void implement_random(std::string plik);
    std::vector<double> get_data(std::string);
    void bubble_sort(vector<double>& vec, int liczba);

    void set_data(vector<double> vec, std::string, int);

    template<typename V, typename S>
    void display_bubble_sort(const V& vec, const S& text);

    template<typename T, typename N>
    void Swap(T *a, N *b);

   
};