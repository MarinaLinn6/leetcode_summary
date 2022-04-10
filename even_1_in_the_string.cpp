#include <iostream>
#include <string>

using namespace std;
int main()
{
    int input_string = 11100101;
    // cin >> input_string;

    int changable = -1;
    int currcount = 0;
    int totaloperation = 0;
    string myinput;

    while (input_string != 0)
    {
        myinput.append(to_string(input_string % 10));
        input_string /= 10;
    }

    for (int i = 0; i < myinput.length(); i++)
    {
        if (myinput[i] == '0')
        {
            if (i == 0)
            {
                continue;
            }
            if (currcount % 2 != 0)
            {
                if (changable > 0)
                {

                    totaloperation++;
                    changable = i;
                }
                else if (i + 1 < myinput.length())
                {
                    totaloperation++;
                    myinput[i + 1] = '1';
                    changable = i;
                    currcount = 0;
                }
                else
                {
                    cout << "-1" << endl;
                }
            }
            currcount = 0;
        }
        else
        {
            currcount++;
        }
        cout << "out" << i << endl;
    }
    cout << currcount << changable << endl;
    if (currcount % 2 == 1 && changable > 0)
    {
        totaloperation++;
    }
    cout << totaloperation << endl;
}