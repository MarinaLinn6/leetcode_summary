
#include <iomanip>
// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{
    // please define the C++ input here. For example: int a,b; cin>>a>>b;;
    string eachword;
    double totallength = 0;
    double totalNum = 0;
    // please finish the function body here.
    while (cin >> eachword)
    {
        totallength += eachword.length();
        totalNum += 1;
    }
    double ans = totallength / totalNum;

    // please define the C++ output here. For example:cout<<____<<endl;
    cout << setprecision(3) << ans;
    return 0;
}
