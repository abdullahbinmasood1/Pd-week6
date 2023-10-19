#include<iostream>
using namespace std;
string checkStudentStatus(int EH,int Emin,int StH,int Stmin);
main()
{
    int ExmHr,ExmMin,StHr,StMin,check;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> ExmHr;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> ExmMin;
    cout << "Enter Student hour of arrival: ";
    cin >> StHr;
    cout << "Enter Student minutes of arrival: ";
    cin >> StMin;
    cout << checkStudentStatus(ExmHr,ExmMin,StHr,StMin);
}
string checkStudentStatus(int EH,int Emin,int StH,int Stmin)
{
    string result;
    if((EH>StH && Emin<(Stmin+30))||(EH==StH && Emin>(Stmin+30)||(EH>StH&&Stmin==Emin)))
    {
        result = "Early";
    }
    if(EH>StH&&Emin<(Stmin+31)||(EH==StH&&Emin>=(Stmin+29)))
    {
        result = "On time";
    }
    if((EH<StH)||(EH==StH && Emin<Stmin))
    {
        result = "Late";
    }
    return result;
}