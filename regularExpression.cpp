#include <iostream>
#include <regex>

using namespace std;

// tel:+86-123-23432 > 5num
// rep:z1834@qq.com
// rep:Marina@qq.cn.com
int main()
{
    regex email("^[0-9a-zA-z]{5,}@([a-zA-z]{2,8}.com|[a-zA-z]{2,8}.[a-zA-z]{2,8}.com)$");
    string s = "17dafd5835873@gmail.gmail.com";
    smatch resultemail;
    bool ismatchemail = regex_match(s, resultemail, email);

    if (ismatchemail)
    {
        cout << "Match: " << resultemail[0] << endl;
    }
    else
    {
        cout << "do not match." << endl;
    }

    regex phonenumber("^([0-9]{1,}|[0-9]{1,}-[0-9]{1,}|[0-9]{1,}-[0-9]{1,}-[0-9]{1,})$");

    string phone = "86-123-234355";
    smatch resultphone;
    bool ismatchphone = regex_match(phone, resultphone, phonenumber);

    if (ismatchphone)
    {
        cout << "Match: " << resultphone[0] << endl;
    }
    else
    {
        cout << "do not match." << endl;
    }
}