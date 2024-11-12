#include "ixc3303_Catalog.h"
#include "ixc3303_In_Person.h"
#include "ixc3303_Online.h"
#include "ixc3303_Hybrid.h"
#include "ixc3303_Course.h"
#include <typeinfo>

int main()
{

    In_Person in_person("CSE",1325,001,"OOP","Gieser","Computer",20);
    in_person.add_student(1001593303);
    std::cout << in_person.get_room() << std::endl;
    in_person.set_room("Computer 2");
    in_person.get_room();
    in_person.get_seat_cap();
    in_person.set_seat_cap(30);
    in_person.get_seat_cap();
    std::cout << in_person << std::endl;

    Online online("CSE",1325,001,"OOP","Gieser","Zoom");
    online.get_software();
    online.set_software("Team");
    online.get_software();
    online.add_student(1234567890);
    std::cout << online << std::endl;

    
    Hybrid hyb ("CSE",1324,002,"LLP","Shawn", "Com", 20, "Teams");
    std::cout << hyb.get_id_split() << std::endl;
    hyb.set_id_split(1234569909);
    hyb.add_student(123264309);

    return 0;
}
