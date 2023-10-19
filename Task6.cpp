#include<iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
    string month;
    int stays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;
    cout << calculateHotelPrices(month,stays);
   }
string calculateHotelPrices(string month, int numberOfStays)
{
    float result,result1;
    float discount;
    if ((month == "May" || month == "October") && (numberOfStays<=7))
    {
        result = 50*numberOfStays;
    }
    if ((month == "May" || month == "October") && (numberOfStays>7&&numberOfStays<=14))
    {
        discount = (50*numberOfStays)*5/100;
        result = 50*numberOfStays-discount;
    }
    if ((month == "May" || month == "October") && (numberOfStays>14))
    {
        discount = (50*numberOfStays)*30/100;
        result = 50*numberOfStays-discount;
    }
    if ((month == "June" || month == "September") && (numberOfStays<=14))
    {
        result = 75.20*numberOfStays;
    }
    if ((month == "June" || month == "September") && (numberOfStays>14))
    {
        discount = (50*numberOfStays)*20/100;
        result = 75.20*numberOfStays-discount;
    }
    if (month == "July" || month == "August" )
    {
        result = 76*numberOfStays;
    }
    if (month == "May" || month == "October") 
    {
        result1 = 65*numberOfStays;
    }
    if (month == "June"|| month == "September") 
    {
        result1 = 68.70*numberOfStays;
    }
    if (month == "July" || month == "August") 
    {
        result1 = 77*numberOfStays;
    }
    if ((month == "May" || month == "October")&&(numberOfStays>14)) 
    {
        discount = (65*numberOfStays)*10/100;
        result1 = 65*numberOfStays-discount;
    }
    if ((month == "June" || month == "September")&&(numberOfStays>14)) 
    {
        discount = (68.70*numberOfStays)*10/100;
        result1 = 668.70*numberOfStays-discount;
    }
    if ((month == "July" || month == "August")&&(numberOfStays>14)) 
    {
        discount = (77*numberOfStays)*10/100;
        result1 = 77*numberOfStays-discount;
    }
    return "Apartment: "+ to_string(result1) + "$. \n" "Studio: "+ to_string(result)+ "$.";
}