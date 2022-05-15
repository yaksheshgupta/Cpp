// fisrt cpp program(8hr+)
// To find no. of days left from current date to given date
#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    string nd;
    string qq;
    cout << "FOR WHICH EVENT U R SETTING" << endl;
    cin >> qq;
    cout << "ENTER DATE IN mm/dd/yyyy" << endl;
    cin >> nd;
    int new_month = stoi(nd.substr(0, 2));
    int new_day = stoi(nd.substr(3, 2));
    int new_year = stoi(nd.substr(6, 4));
    const int MAXLEN = 80;
    char s[MAXLEN];
    time_t t = time(0);
    strftime(s, MAXLEN, "%m/%d/%Y", localtime(&t));
    string a = s;
    int month = stoi(a.substr(0, 2));
    int day = stoi(a.substr(3, 2));
    int year = stoi(a.substr(6, 4));
    if (day>new_day && month>=new_month && year>=new_year)
    {
        cout<<"ENTER VALID DATE"<<endl;
    }
    else
    {
        int bb = month - new_month;
        int mprob = 0;
        int total_days = 0;
        if (month != new_month)
        {
            if (month == 2)
            {
                total_days += (28 - day) + new_day;
            }
            else if (month % 2 == 1)
            {
                total_days += (31 - day) + new_day;
            }
            else if (month % 2 == 0)
            {
                total_days += (30 - day) + new_day;
            }
        }
        if (month == new_month)
        {
            if (month == 2)
            {
                total_days += ( new_day -day);
            }
            else if (month % 2 == 1)
            {
                total_days += ( new_day -day);
            }
            else if (month % 2 == 0)
            {
                total_days += ( new_day -day);
            }
        }

        for (int i = 1; abs(bb) > i; i++)
        {
            if (mprob == 0)
            {
                total_days += 31;
                mprob = 1;
            }
            else if (mprob == 1)
            {
                total_days += 30;
                mprob = 0;
            }
        
        }
    cout <<"UR "<< qq<<"'s"<<" IN---"<<total_days<<"DAYS";
    }
    
}