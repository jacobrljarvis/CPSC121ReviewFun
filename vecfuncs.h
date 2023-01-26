//header file guard code prevents the problem of double inclusions of a header file

#ifndef VECFUNCS_H
#define VECFUNCS_H

#include <iostream>
#include <vector>
//task 1: define and call a function that finds the smallest and alrgest values in the vector
//taske 2: convert to the 3 file format
using namespace std;

void fillVector(vector<int>&);
void findExtremes(vector<int>&, int&, int&);

#endif