#include "ixc3303_Course.h"
#pragma once

class In_Person : public virtual Course
{
    public:
        In_Person(std::string cp, int cn, int sn, std::string n, std::string i, std::string room, int sc) {};
        void add_student(int id);
        std::string get_room();
        void set_room(std::string r);
        int get_seat_cap();
        void set_seat_cap(int sc);
        friend std::ostream& operator<<(std::ostream&, const In_Person&);
    protected:
        std::string room;
        int seat_cap;
};
