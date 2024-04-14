#include<iostream>
#include<string>
using namespace std;
#define int long long
int mod;
int sparseTable[1000001][20];

void buildSparseTable(int array[], int size)
{
    for (int i = 0; i < size; i++)
        sparseTable[i][0] = array[i];

    for (int j = 1; j <= 20; j++)
        for (int i = 0; i + (1 << j) <= size; i++)
            sparseTable[i][j] = (sparseTable[i][j - 1] * sparseTable[i + (1 << (j - 1))][j - 1]) % mod;
}

int query(int left, int right)
{
    int product = 1;
    for (int j = 20; j >= 0; j--)
    {
        if ((1 << j) <= right - left + 1)
        {
            product *= sparseTable[left][j];
            product %= mod;
            left += 1 << j;
        }
    }
    return product;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> mod;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        buildSparseTable(arr, n);
        string s;
        cin >> s;
        int leftIndex = 0, rightIndex = n - 1;
        for (int i = 0; i < n; i++)
        {
            cout << query(leftIndex, rightIndex) << " ";
            if (s[i] == 'L')
            {
                leftIndex++;
            }
            else
            {
                rightIndex--;
            }
        }
        cout << endl;
    }
}