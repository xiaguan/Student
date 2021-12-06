//
// Created by 75108 on 2021/12/7.
//

#ifndef TEST_STUDENT_H
#define TEST_STUDENT_H
#include <iostream>
#include <vector>
using namespace std;

class Student {
    Student()=default;
    //rank应由程序排序后赋值
    Student(const string& n,const string&nm,std::initializer_list<pair<string,int>>);

protected:
    // 一个学生应该具有：姓名，学号，成绩（多门成绩），排名（sort）
    std::string name;
    std::string number;
    std::vector<std::pair<std::string,int>> grades; //成绩由pair指定（科目名称，成绩）
    int rank=-1;  //学生的排名
};


//将一个Student转变为json格式，写入到json文件中
// {"name":"xx","id":"xxx","rank":"xxxx","grades(subjectx)":"xx","gtade(subject)":"xx"}
class Student_json:private Student{

};


#endif //TEST_STUDENT_H
