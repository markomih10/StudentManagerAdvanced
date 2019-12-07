#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>
using namespace std;
class student 
{
private:
string person;
string fullLengthName;
int grade;
vector <double> grades;
string firstName;
string lastName;
public:
student();
void setName(string firstName,string lastNme);
string fullName();
void addGrade(double grade);
double getScore();
};

#endif
