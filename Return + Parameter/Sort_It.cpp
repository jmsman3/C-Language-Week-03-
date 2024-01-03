#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >>
            a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int MotNumber_ith_er_Jonno = a[i].math_marks + a[i].eng_marks;
            int MotNumber_jth_er_Jonno = a[j].math_marks + a[j].eng_marks;

            if (MotNumber_ith_er_Jonno < MotNumber_jth_er_Jonno)
            {
                swap(a[i], a[j]);
            }
            if (MotNumber_ith_er_Jonno == MotNumber_jth_er_Jonno)
            {
                if (a[i].id > a[j].id)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id
             << " " << a[i].math_marks
             << " " << a[i].eng_marks << endl;
    }

    return 0;
}
