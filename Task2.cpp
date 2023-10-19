#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish,float marksMaths,float marksChemistry,float marksSocialScience,float marksBiology);
string calculateGrade(float average);
main()
{
    float Eng,Maths,Che,SS,Bio;
    string name;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> Eng;
    cout << "Enter marks for Maths: ";
    cin >> Maths;
    cout << "Enter marks for Chemistry: ";
    cin >> Che;
    cout << "Enter marks for Social Science: ";
    cin >> SS;
    cout << "Enter marks for Biology: ";
    cin >> Bio;
    cout << "Student Name: " << name <<endl;
    float percentage = calculateAverage(Eng,Maths,Che,SS,Bio);
    string Grade = calculateGrade(percentage);
    cout << "Percentage: " << percentage << "%" <<endl;
    cout << "Grade: " << Grade;
    
}
float calculateAverage(float marksEnglish,float marksMaths,float marksChemistry,float marksSocialScience,float marksBiology)
{
    float average;
    average = (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology)*100/500;
    return average;
}
string calculateGrade(float average)
{
    string result;
    if(average>90)
    {
    result = "A+";
    }
    else if(average>80 && average<=90)
    {
        result = "A";
    }
    else if(average>70 && average<=80)
    {
        result = "B+";
    }
    else if(average>60 && average<=70)
    {
        result = "B";
    }
    else if(average>=50 && average<=60)
    {
        result = "C";
    }
    else if(average>40 && average<=50)
    {
        result = "D";
    }
    else 
    {
        result = "F";
    }
    return result;
}