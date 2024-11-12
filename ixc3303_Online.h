#include "ixc3303_Course.h"
#pragma once

class Online : public virtual Course
{
    public:
        Online(std::string cp, int cn, int sn, std::string n, std::string i, std::string s) {};
        std::string get_software();
        void set_software(std::string s);
        void add_student(int id);
        friend std::ostream& operator<<(std::ostream&, const Online&);
    protected:
        std::string software;
};