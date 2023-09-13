#include "io.h"

void BubbleSort()
{
  int Number[10] = {6,3,10,4,8,2,5,9,1,7};
  int temp;
  
  for(int i=9; i>0; i--)
  {
    for(int j=0; j<i; j++)
    {
      // 비교, 교환(swap)
      if (Number[j] > Number[j+1])
      {
        // 교환(swap)        
        temp = Number[j];
        Number[j] = Number[j+1];
        Number[j+1] = temp;
      }
    }
  }

  for (int i=0; i<10; i++)
  {
    cout << Number[i] << " ";
  }

  cout << endl;
}