#include<iostream>
using namespace std;
float amountDue(char code,char time,float minutes);
main()
{
    char code,time;
    float min;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
	if(code == 'P' || code == 'p')
    {
    cout << "Enter time of the call (D/d for day, N/n for night): ";
    cin >> time;
    }
    
    cout << "Enter the number of minutes used: ";
    cin >> min;
    if(code == 'P' || code == 'p')
    {
        cout <<"Service type: Premium"<<endl;
    }
    if(code == 'R' || code =='r')
    {
        cout <<"Service type: Regular"<<endl;
    }
    cout << "Total Minutes Used: " <<min<<" minutes"<<endl;
    float amount=amountDue(code,time,min);
    cout << "Amount Due: $"<<amount;
}
float amountDue(char code,char time,float minutes)
{   
    float result;
    if((code == 'R' || code == 'r') && minutes<=50)
    {
    result = 10;
    }
    if((code == 'R' || code == 'r') && minutes>=50)
    {
        result = 10+((minutes-50)*0.20);
    }
    if(((code == 'P' || code == 'p') && (time == 'D' || time =='d')) && minutes <=75)
    {
        result = 25;
    }
    if(((code == 'P' || code == 'p') && (time == 'D' || time =='d')) && minutes>75)
    {
        result = 25+((minutes-75)*0.10);
    }
    if(((code == 'P' || code == 'p') && (time == 'N' || time =='n')) && minutes <=100)
    {
        result = 25;
    }
    if(((code == 'P' || code == 'p') && (time == 'N' || time =='n')) && minutes >100)
    {
        result = 25+((minutes-100)*0.05);
    }
    return result;      
}