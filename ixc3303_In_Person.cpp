#include "ixc3303_In_Person.h"

void In_Person::add_student(int id)
{
    if (seat_cap == 0)
    {return;}   // return if seat capacity is 0 before going to next command
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
std::string In_Person::get_room()
{
    return room;
}
void In_Person::set_room(std::string r)
{
    room = r;
}
int In_Person::get_seat_cap()
{
    return seat_cap;
}
void In_Person::set_seat_cap(int sc)
{
    seat_cap = sc;
}
std::ostream& operator<<(std::ostream& ost, const In_Person& course)
{
    ost << course.course_prefix << " " << course.course_number << " - " << course.section_number << std::endl;
    ost << course.name << std::endl;
    ost << "Room Number: " << course.room << std::endl;
    ost << "Seat Cap: " << course.seat_cap << std::endl;
    ost << "Remaining seats: " << course.seat_cap - course.student_ids.size() << std::endl;
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