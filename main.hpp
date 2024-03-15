//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        return rand();
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
int mid=(rdnum3+rdnum1+rdnum2)/3;
int j=0;
      for (size_t i = 0; j < 1; i++)
      {
        if ((rdnum1-i)==mid||(rdnum1+i)==mid)
        {
                return rdnum1;
                j++;
        }else if ((rdnum2)-i==mid||(rdnum1+i)==mid)
        {
                return rdnum2;
                j++;
        }else if ((rdnum3)-i==mid||(rdnum1+i)==mid)
        {
                return rdnum3;
                j++;
        }
        
        
        
      }
      
      
      
                        
}