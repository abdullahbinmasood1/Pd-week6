#include<iostream>
using namespace std;
string checkPointPosition(int h,int x,int y);
main()
{
    int height,xCoord,yCoord;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> xCoord;
    cout << "Enter y coordinate: ";
    cin >> yCoord;
    string result = checkPointPosition(height,xCoord,yCoord);
    cout << result;
}
string checkPointPosition(int h,int x,int y)
{
    string result;
    if(x>h && x<2*h && y<4*h && y>h)
    {
        result = "Inside";
    }
    else if(x<0 || x>2*h || y<0 || y>4*h)
    {
        result = "Outside";
    }
    else
    {
        result = "Border";
    }
    return result;
}