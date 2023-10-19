#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
    string year;
    int holidays,weekends;
    cout << "Enter year type: ";
    cin >> year;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> weekends;
    int res = calculateVolleyballGames(year,holidays,weekends);
    cout << res;    
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    float result,percent;
    if(yearType=="normal")
    {
        result = 36+(2*holidays/3);
    }
    if(yearType=="leap")
    {
      percent=(2*holidays/3)*15/100;  
        result = 36+(36*15)/100+2*holidays/3+(2*holidays/3)*15/100;
    }
    return result;
}