#include "Bubble.h"
#include "Quick.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
    std::vector<double> vec_bubble;
    std::vector<double> vec_quick;
    int liczba{0}, decision{0};
    std::string file_before_sort{""};
    std::string file_after_sort{""};
    std::string rozszerzenie{".csv"};
    std::cout << "Podaj nazwe pliku z ktorego odczytac: "; cin >> file_before_sort;
    std::cout << "Podaj nazwe pliku do ktorego zapisac: "; cin >> file_after_sort;
    file_after_sort  += rozszerzenie;
    file_before_sort += rozszerzenie;
    Bubble b;
    Quick q;
  
    while(true)
    {

            cout << "0. implement random \n";
            cout << "1. Bubble sort \n";
            cout << "2. Quick sort \n";
            cout << "3 .show \n";
            cout << "4. end \n";
            cin >> decision;

    switch(decision)
    {

        case 0:  { 
              b.implement_random(file_before_sort); 
              q.implement_random(file_before_sort);
              vec_bubble = b.get_data(file_before_sort);
              vec_quick  = q.get_data(file_before_sort);
        } break;
          
        case 1: { 
                cout << "how much?"; cin >> liczba;
            b.bubble_sort(vec_bubble, liczba);
            b.set_data(vec_bubble, file_after_sort, liczba);
        } break;

        case 2: {
                cout << "how much?"; cin >> liczba;
                sort(vec_quick.begin(), vec_quick.begin() + liczba);
                q.set_data(vec_quick, file_after_sort, liczba);
           
        } break;

        case 3: {
            for(auto &x: vec_bubble)
            cout << x << " ";
            cout << "\n";
        } break;

        case 4: return 0; break;
        default: return 0; break;

    }
    }
    return 0;
}