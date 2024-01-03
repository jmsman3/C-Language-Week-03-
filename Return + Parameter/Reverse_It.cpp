#include <bits\stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};

int main()
{
    int T;
    cin >> T;
     Student a[T];
    for (int i = 0; i < T; i++)
    {
       
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id;
    }
      for( int i = 0 ; i<T/2 ; i++)
      {
        swap ( a[i].sec , a[T- i -1].sec);
      }



  
    for (int i = 0; i < T; i++)
    {
        cout << a[i].name <<" "<< a[i].cls <<" "<< a[i].sec <<" "<< a[i].id << endl;
    }

    return 0;
}