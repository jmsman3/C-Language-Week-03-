#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    char name[101];
    char section;
    int totalmarks;

    student(int id, char name[100], char section, int totalmarks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->totalmarks = totalmarks;
    }

    student findSorbocchoNumber(student OnnoPolapan)
    {
        if (this->totalmarks == OnnoPolapan.totalmarks)
        {
            if (this->id < OnnoPolapan.id)
            {
                return *this;
            }
            else
            {
                return OnnoPolapan;
            }
        }
        else
        {
            if (this->totalmarks > OnnoPolapan.totalmarks)
            {
                return *this;
            }
            else
            {
                return OnnoPolapan;
            }
        }
    }
};

int main()
{
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int id1, id2, id3;
        int totalmarks1, totalmarks2, totalmarks3;
        char section1, section2, section3;
        char name1[101], name2[101], name3[101];

        cin >> id1 >> name1 >> section1 >> totalmarks1;
        cin >> id2 >> name2 >> section2 >> totalmarks2;
        cin >> id3 >> name3 >> section3 >> totalmarks3;

        student student1(id1, name1, section1, totalmarks1);
        student student2(id2, name2, section2, totalmarks2);
        student student3(id3, name3, section3, totalmarks3);

        student sorbocchoNumberPabe = student1.findSorbocchoNumber(student2).findSorbocchoNumber(student3);
        cout << sorbocchoNumberPabe.id << " " << sorbocchoNumberPabe.name << " " << sorbocchoNumberPabe.section << " " << sorbocchoNumberPabe.totalmarks << endl;
    }

    return 0;
}
