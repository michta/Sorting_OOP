#include "Bubble.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    std::vector<double> vec;
    int liczba{0}, decision{0};
    std::string file_before_sort{""};
    std::string file_after_sort{""};
    std::string rozszerzenie{".csv"};
    std::cout << "Podaj nazwe pliku z ktorego odczytac: "; cin >> file_before_sort;
    std::cout << "Podaj nazwe pliku do ktorego zapisac: "; cin >> file_after_sort;
    file_after_sort  += rozszerzenie;
    file_before_sort += rozszerzenie;

    Bubble b;
    while(true)
    {

            cout << "0. implement random \n";
            cout << "1. sort \n";
            cout << "2. show numbers \n";
            cout << "3. end \n";
            cin >> decision;

    switch(decision)
    {

        case 0:  { 
            b.implement_random(file_before_sort); 
            vec = b.get_data(file_before_sort);
        } break;
          
        case 1: { 
                cout << "how much?"; cin >> liczba;
            b.bubble_sort(vec, liczba);
            b.set_data(vec,file_after_sort, liczba);
        } break;

        case 2: {
            for(auto &x: vec)
            cout << x << " ";
            cout << "\n";
        } break;

        case 3: return 0; break;
        default: return 0; break;

    }
    }
    return 0;
}