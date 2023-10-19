#include<iostream>
using namespace std;
string findZodiacSign(int day,string month);
main()
{
    int date;
    string month,sign;
    cout << "Enter the day of birth: ";
    cin >> date;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    sign = findZodiacSign(date,month);
    cout << "Zodiac sign: " << sign;
}
string findZodiacSign(int day,string month)
{
    string Zodiacsign;

    if(((day>=21&&day<=31)&&(month=="March"))||((day>=1&&day<=19)&&(month=="April")))
    {
        Zodiacsign = "Aries";
    }
    if(((day>=20&&day<=30)&&(month=="April"))||((day<=20&&day>=1)&&(month=="May")))
    {
        Zodiacsign = "Taurus";
    }
    if(((day>=21&&day<=31)&&(month=="May"))||((day>=1&&day<=20)&&(month=="June")))
    {
        Zodiacsign = "Gemini";
    }
    if(((day>=21&&day<=30)&&(month=="June"))||((day<=22&&day>=1)&&(month=="July")))
    {
        Zodiacsign = "Cancer";
    }
    if(((day>=23&&day<=31)&&(month=="July"))||((day<=22&&day>=1)&&(month=="August")))
    {
        Zodiacsign = "Leo";
    }
    if(((day>=23&&day<=31)&&(month=="August"))||((day<=22&&day>=1)&&(month=="September")))
    {
        Zodiacsign = "Virgo";
    }
    if(((day>=23&&day<=30)&&(month=="September"))||((day<=22&&day>=1)&&(month=="October")))
    {
        Zodiacsign = "Libra";
    }
    if(((day>=23&&day<=31)&&(month=="October"))||((day<=21&&day>=1)&&(month=="November")))
    {
        Zodiacsign = "Scorpio";
    }
    if(((day>=22&&day<=30)&&(month=="November"))||((day<=21&&day>=1)&&(month=="December")))
    {
        Zodiacsign = "Sagittaurius";
    }
    if(((day>=22&&day<=31)&&(month=="December"))||((day<=19&&day>=1)&&(month=="January")))
    {
        Zodiacsign = "Capricorn";
    }
    if(((day>=20&&day<=31)&&(month=="January"))||((day<=18&&day>=1)&&(month=="February")))
    {
        Zodiacsign = "Aquarius";
    }
    return Zodiacsign;

}
