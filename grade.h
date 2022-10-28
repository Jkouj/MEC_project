#pragma once
#include <iostream>
#include <vector>

class Grade {
private:
    std::vector<int> grades;
    char finalGrade;

public:
    Grade();
    void getGrades();
    void calculateGrade();
};
