#include "ixc3303_Online.h"

std::string Online::get_software()
{
    return software;
}
void Online::set_software(std::string s)
{
    software = s;
}
void Online::add_student(int id)
{
    for(int i : student_ids)
    {
        if(i == id)
        {
            std::cout << "Student already enrolled in course" << std::endl;
            return;
        }
    }
    student_ids.push_back(id);
    std::sort(student_ids.begin(), student_ids.end()); 
}
std::ostream& operator<<(std::ostream& ost, const Online& course)
{
    ost << course.course_prefix << " " << course.course_number << " - " << course.section_number << std::endl;
    ost << course.name << std::endl;
    ost << "Primarily used Software: " << course.software << std::endl;
    ost << "Instructor: " << course.instructor << std::endl;
    ost << "Number of Students Enrolled: " << course.student_ids.size() << std::endl;
    if(course.student_ids.size() > 0)
    {
        ost << "Students enrolled: " << std::endl;
        for(int i : course.student_ids)
        {
            ost << i << std::endl;
        }
    }   
    return ost; 
}