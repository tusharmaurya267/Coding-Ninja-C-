#include<bits/stdc++.h>
using namespace std;

#include "2_Inheritence_student.cpp"
#include "2_Inheritence_teacher.cpp"
#include "2_Inheritence_TA.cpp"

int main(){
    TA a;
    a.print();
    a.student :: print();
    a.teacher :: print();
    
}