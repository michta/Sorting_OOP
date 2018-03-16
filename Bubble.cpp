#include "Bubble.h"
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


void Bubble::implement_random(string plik)
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

vector<double> Bubble::get_data(string plik)
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
        }
        else 
        break;

    }

    file.close();
    return vec;
} 

void Bubble::set_data(vector<double> vec, string plik, int liczba)
{
   
    ofstream file;

    file.open(plik, std::ofstream::out | std::ofstream::trunc);
    

    for(int i = 0; i < liczba; ++i)
    {
        file << vec[i] << "\n";
    }
    file.close();
}

template<typename T, typename N>
void Bubble::Swap(T *a, N *b)
{
    auto tmp = *a;
    *a = *b;
    *b = tmp;
}

template<typename V, typename S>
void Bubble::display_bubble_sort(const V& vec, const S& text)
{
    cout << text << "\n";
    copy(begin(vec), end(vec), ostream_iterator<typename V::value_type>(cout, " "));
    cout << "\n";
}

void Bubble::bubble_sort(vector<double>& vec, int liczba)
{
    for(int i = 0; i < liczba; ++i)
        for(int j = i + 1; j < liczba; ++j)
        {
            if(vec[i] > vec[j])
                Swap(&vec[i], &vec[j]);
        }
}
