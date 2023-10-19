#include<iostream>
using namespace std;
string decideActivity(string temperature,string humidity);
main()
{
    string temperature,humid;
    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;
    cout << "Enter humidity (dry or humid): ";
    cin >> humid;
    string result = decideActivity(temperature,humid);
    cout << "Recommended activity: " << result;
}
string decideActivity(string temperature,string humidity)

{
    string activity;
    if(temperature=="warm"&& humidity=="dry")
    {
        activity= "Play tennis";
    }
    if(temperature=="warm"&& humidity=="humid")
    {
        activity= "swim";
    }if(temperature=="cold"&& humidity=="dry")
    {
        activity= "Play basketball";
    }if(temperature=="cold"&& humidity=="humid")
    {
        activity= "Watch tv";
    }
    return activity;
}