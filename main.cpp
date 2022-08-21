#include <iostream>

using namespace std;

int
noobOMatic (int noobprice, int noobs1, int noobs2, int price)
{
  int noob = 0;
  float percent = 0;
  for (int i = noobs1 - 1; i < noobs2; i++)
    {
      noob += noobprice + 18 * i;
      cout <<"price of "<< i + 1 << " noobs: " << price - noob << endl;
      if (price - noob > 0)
	{
	  percent += 0;
	  continue;
	}
      percent += 1;
    }
  cout << "chance of gaining money: " << percent / ((noobs2 - noobs1) + 1) << endl;
  return 1;
}

int
main ()
{
  cout << "normal" << endl;
  noobOMatic (810, 1, 5, 2430);
  cout << "rare" << endl;
  noobOMatic (846, 2, 10, 5070);
  cout << "epic" << endl;
  noobOMatic (846, 3, 25, 12900);
  return 0;
}
