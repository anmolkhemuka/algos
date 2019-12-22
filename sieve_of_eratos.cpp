#include <iostream>
#include <cmath>
using namespace std;

void soe(int n)
{
    bool a[n + 1] = {0};             //declaring a boolean array to keep track if number "i" is prime or not
    for (int i = 2; i * i <= n; i++) //will cross out multiples of prime numbers from 2 to sqrt(n)
    {
        if (!a[i]) //check if i is orime i.e. it is not crossed out
        {
            for (int j = i * i; j <= n; j = j + i)
                a[j] = 1;
        }
    }
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!a[i])
            count++;
    }
    cout << count << " prime numbers : ";
    for (int i = 2; i <= n; i++)
    {
        if (!a[i])
            cout << i << ", ";
    }
}

int main()
{
    int n;
    cin >> n;
    soe(n);
}
