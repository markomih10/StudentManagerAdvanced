#include "student.h"
#include <string>
#include <vector>
using namespace std;
student::student()
{
        grade = 0;
        vector<double> grades;
        firstName="";
        lastName="";

}
void student::setName(string firstName,string lastName)
{
        fullLengthName = firstName + " " + lastName;
}
string student::fullName()
{
        return fullLengthName;
}
void student::addGrade(double grade)
{
        grades.push_back(grade);
}

double student::getScore()
{
        double sum = 0;
        double counter = 0;
        double average = 0;
        for(int i=0; i<grades.size(); i++)
        {
                sum = sum + grades.at(i);
                counter++;
        }
        if(!(counter==0))
        {
                average = sum/counter;
        }
        return average;
return 0;
}
