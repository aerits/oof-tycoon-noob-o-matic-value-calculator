#include <iostream>

using namespace std;

int
noobOMatic (int noobprice, int noobs1, int noobs2, int price)
{
  int noob = 0;
  float percent = 0;
  for (int i = noobs1 - 1; i < noobs2; i++)
    {
      noob += noobprice + 20 * i;
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
  int noob=3920;
  cout << "normal" << endl;
  noobOMatic (noob, 1, 5, 11000);
  cout << "rare" << endl;
  noobOMatic (noob, 2, 10, 23000);
  cout << "epic" << endl;
  noobOMatic (noob, 3, 25, 59000);
  return 0;
}
