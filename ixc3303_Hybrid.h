#include "ixc3303_In_Person.h"
#include "ixc3303_Online.h"
#pragma once

class Hybrid : public In_Person, public Online
{
    public:
        Hybrid(std::string cp, int cn, int sn, std::string n, std::string i, std::string r, int sc, std::string s) : Course(cp,cn,sn,n,i), In_Person(cp,cn,sn,n,i,room,sc), Online(cp,cn,sn,n,i,s) {};
        int get_id_split();
        void set_id_split(int id);
        void add_student(int id);
        friend std::ostream& operator<<(std::ostream&, const Hybrid&);
    private:
        int id_split;
};