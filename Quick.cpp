#include "Quick.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
#include <fstream>
#include <random>
#include <ctime>
#include <cstdio>
using namespace std;


    Quick::Quick() {};

void Quick::implement_random(string plik)
{
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(0, 1000);
    
    ofstream file;
    file.open(plik);
 
    for(int i = 0; i < 20000; i++)
    {
        file << dist(mt);
        file << "\n";
    }
    file.close();
}

    vector<double> Quick::get_data(std::string plik)
    {
        vector<double> vec;
        ifstream file;
        file.open(plik);

        double tmp;

        while(true)
     {
         if(file.good())
            {
                 file >> tmp;
                vec.push_back(tmp);
                cout << tmp << "\n";
             }
         else 
          break;

    }
       file.close();
       return vec;

    }

    void Quick::quick_sort(std::vector<double> vec, int lewy, int prawy)
    {
         // ...
    }
    void Quick::set_data(std::vector<double> vec, std::string plik, int liczba)
    {
         ofstream file;

         file.open(plik, std::ofstream::out | std::ofstream::trunc);
    

          for(int i = 0; i < liczba; ++i)
             file << vec[i] << "\n";
          
       file.close();
    }

    void Quick::data_time(int number, double val)
    {
        ofstream file;
       
        file.open("quick_time.csv", ios::out | ios::app);
        file << number << "," << val;
        file << "\n";
        file.close();
    }

    void Quick::display_quick_sort(const std::vector<double>& vec, const std::string& text)
    {
            cout << text << "\n";
            copy(begin(vec), end(vec), ostream_iterator<double>(cout, " "));
            cout << "\n";
    }

        Quick::~Quick() {};