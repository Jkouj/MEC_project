#include "grade.h"
#include <iostream>
#include <vector>

Grade::Grade(){
    std::vector<int> grades;
}

void Grade::getGrades(){
    for (int i = 1 ; i++ ; i < 11){
        int grade = 0;
        std::cout << "Enter your lab #" << i << " grade out of 5 points:\n";
        std::cin >> grade;
        grades.push_back(grade);
    }
}