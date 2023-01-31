//whats good yungblood
//whats good mayne

#include "vecfuncs.h"

int main() 
{  
  int max;
  int min;
  vector<int> userNums;

  fillVector(userNums);

  cout << "Size: " << userNums.size() << endl;

  findExtremes(userNums, max, min);

  cout << "Max: " << max << " Min: " << min << endl;
  
}