#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity);
main()
{
    string name,day;
    double quantity;
    cout << "Enter the Fruit's name: ";
    cin >> name;
    cout << "Enter the day of week: ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;
    float price = calculateFruitPrice(name,day,quantity);
    cout << "The fruit price is: " << price;
}
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity)
{
    float FruitPrice;
    if ((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday") && fruit=="banana")
    {
    FruitPrice = quantity*2.50;
    }
    if ((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday") && fruit=="apple")
    {
    FruitPrice = quantity*1.20;
    }
    if ((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday") && fruit=="orange")
    {
    FruitPrice = quantity*0.85;
    }
    if ((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday") && fruit=="grapefruit")
    {
    FruitPrice = quantity*1.45;
    }
    if ((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday") && fruit=="kiwi")
    {
    FruitPrice = quantity*2.70;
    }
    if ((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday") && fruit=="pineapple")
    {
    FruitPrice = quantity*5.50;
    }
    if ((dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday") && fruit=="grapes")
    {
    FruitPrice = quantity*3.85;
    }
    if ((dayOfWeek=="Saturday"||dayOfWeek=="Sunday") && fruit=="banana")
    {
    FruitPrice = quantity*2.70;
    }
    if ((dayOfWeek=="Saturday"||dayOfWeek=="Sunday") && fruit=="apple")
    {
    FruitPrice = quantity*1.25;
    }
    if ((dayOfWeek=="Saturday"||dayOfWeek=="Sunday") && fruit=="orange")
    {
    FruitPrice = quantity*0.90;
    }
    if ((dayOfWeek=="Saturday"||dayOfWeek=="Sunday") && fruit=="grapefruit")
    {
    FruitPrice = quantity*1.60;
    }
    if ((dayOfWeek=="Saturday"||dayOfWeek=="Sunday") && fruit=="kiwi")
    {
    FruitPrice = quantity*3.00;
    }
    if ((dayOfWeek=="Saturday"||dayOfWeek=="Sunday") && fruit=="pineapple")
    {
    FruitPrice = quantity*5.60;
    }
    if ((dayOfWeek=="Saturday"||dayOfWeek=="Sunday") && fruit=="grapes")
    {
    FruitPrice = quantity*4.20;
    }
    return FruitPrice;
}