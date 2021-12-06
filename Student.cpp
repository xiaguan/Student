//
// Created by 75108 on 2021/12/7.
//

#include "Student.h"

Student::Student(const string &n, const string &nm, std::initializer_list<pair<string, int>> ls):
    name(n),number(n)
{
    grades = vector<pair<string,int>>(ls.begin(),ls.end());
}
