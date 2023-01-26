#include "vecfuncs.h"

void fillVector(vector<int>& vector)
{
  int num = 0;

  for(int i = 0; i < 10; i++)
  {
    cout << "Enter an Integer: " << endl;
    cin >> num;
    vector.push_back(num);
  }
}

void findExtremes(vector<int>& vector, int& max, int& min)
{
  min = max = vector.at(0);
  
  for(int i = 1; i < vector.size(); i++)
  {
    if(vector.at(i) > max)
    {
      max = vector.at(i);
    }

    if(vector.at(i) < min)
    {
      min = vector.at(i);
    }
    
  }
  
}