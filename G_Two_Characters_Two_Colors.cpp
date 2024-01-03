#include <iostream>
using namespace std; 

int main()
{
    // array A এর জন্য ইনপুট নেওয়া
    int N;
    cin >> N;
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // array B এর জন্য ইনপুট নেওয়া
    int M;
    cin >> M;
    int *B = new int[M];

    // array A থেকে array B এ মূল্য কপি করা
    for (int i = 0; i < N && i < M; i++)
    {
        B[i] = A[i];
    }

    // array A মুছা
    delete[] A;

    // array B এর অবশিষ্ট উপাদানের জন্য ইনপুট নেওয়া
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }

    // array B প্রিন্ট করা
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }

    // array B মুছা
    delete[] B;

    return 0;
}
