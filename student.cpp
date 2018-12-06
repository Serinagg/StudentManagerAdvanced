#include <iostream>
#include <string>
#include "student.h"

void student::setName(string firstName,string lastName)
{
        first = firstName;
        last = lastName;
}

string student::fullName()
{
        string full;
        full.append(first);

        full.append(" ");
        full.append(last);

        return full;
}

void student::addGrade(double grade)
{
        grd = grade;
        scr.push_back(grd);
}

double student::getScore()
{
        avg = 0;
        total = 0;
        for (int i = 0; i < scr.size();i++)
        {
                place = scr[i];
                total = total + place;
        } 
        if (scr.size() > 0)
        {
                avg = total/scr.size();
        }
        return avg;
}

