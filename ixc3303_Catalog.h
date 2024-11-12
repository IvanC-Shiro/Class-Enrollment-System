#include "ixc3303_Course.h"

class Catalog : public Course
{
    public:
        Catalog() {};
        void add_course(Course*);
        void remove_course(Course*);
        void view_all_courses();
        void view_all_courses_of_prefix(std::string);
        void view_all_sections_of_course(std::string, int);
        void change_instructor(Course*, std::string);
        void add_student(Course*, int);
        void remove_student(Course*, int);
        void view_students_in_course(Course*);
    private:
        std::vector<Course> courses;
        Course new_attribute;
};
