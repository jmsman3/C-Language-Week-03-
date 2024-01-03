#include <bits\stdc++.h>
using namespace std;

class Cricketer
{
public:
  int jersey_no;
  char country;

  Cricketer(string name, int jersey_no, char country);

  {

    this->jersey_no = jersey_no;
    this->country = country;
  }
};

int main()
{
  Cricketer *dhoni = new Cricketer("Ms Dhoni", 05, 'India');
  Cricketer *Kohli = new Cricketer("Virat Kohli ", 07, 'Bangladeshii');

  *Kohli = *dhoni;
  delete dhoni;
  cout << Kohli->jersey_no << " " << Kohli->country << endl;

  return 0;
}