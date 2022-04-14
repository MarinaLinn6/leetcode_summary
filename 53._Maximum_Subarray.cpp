#include <iostream>
#include <string>
#include <vector>

using namespace std;
int subarraysum(vector<int> myvec)
{

    int sum = myvec[0];
    int tempsum = 0;
    for (int i = 0; i < myvec.size(); i++)
    {
        if (tempsum < 0)
        {
            tempsum = 0;
        }
        tempsum += myvec[i];
        sum = max(tempsum, sum);
    }
    return sum;
}

int main()
{

    vector<int> myvec;
    int a = 0;
    while (cin >> a)
    {
        myvec.push_back(a);
    }

    cout << subarraysum(myvec);
}
