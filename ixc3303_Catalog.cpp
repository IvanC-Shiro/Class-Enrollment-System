#include "ixc3303_Catalog.h"

void Catalog::add_course(Course* course)
{
    bool class_found = false;
    for(Course c : courses)
    {
        if(c == *course)
        {
            class_found = true;
            break;
        }
        if(!(c < *course))
        {
            break;
        }
    }
    
    if(!class_found)
    {
        courses.push_back(*course);
        std::sort(courses.begin(), courses.end());
    }
}

void Catalog::remove_course(Course* course)
{
    for(auto it = courses.begin(); it < courses.end(); it++)
    {
        if(*it == *course)
        {
            courses.erase(it);
            break;
        }
    }
}

void Catalog::view_all_courses()
{
    for(Course c : courses)
    {
        std::cout << c.get_course_prefix() << " " << c.get_course_number() << "-" << c.get_section_number() << std::endl;
    }
}

void Catalog::view_all_courses_of_prefix(std::string prefix)
{
    for(Course c : courses)
    {
        if(c.get_course_prefix() == prefix)
        {
            std::cout << c.get_course_prefix() << " " << c.get_course_number() << "-" << c.get_section_number() << std::endl;
        }
    }
}

void Catalog::view_all_sections_of_course(std::string prefix, int number)
{
    for(Course c : courses)
    {
        if(c.get_course_prefix() == prefix && c.get_course_number() == number)
        {
            std::cout << c.get_course_prefix() << " " << c.get_course_number() << "-" << c.get_section_number() << std::endl;
        }
    }
}

void Catalog::change_instructor(Course *course, std::string instructor)
{
    for(Course c : courses)
    {
        if(c == *course)
        {
            c.set_instructor(instructor);
        }
    }
}

void Catalog::add_student(Course *course, int student_id)
{
    for(auto it = courses.begin(); it != courses.end(); it++)
    {
        if(*it == *course)
        {
            it->add_student(student_id);
        }
    }
}

void Catalog::remove_student(Course *course, int student_id)
{
    for(auto it = courses.begin(); it != courses.end(); it++)
    {
        if(*it == *course)
        {
            it->remove_student(student_id);
        }
    }
}

void Catalog::view_students_in_course(Course *course)
{
    for(Course c : courses)
    {   
        if(c == *course)
        {
            std::cout << c << std::endl;
        }
    }
}
