#include <iostream>
using namespace std;
//Son estructuras que tendremos una composición de datos

struct addressStruct
{
    string state, city;
};
struct person
{
    string name;
    int age;
    addressStruct address;
};

int main(void)
{
    person p;
    p.name = "Javi";
    p.age = 22;

    p.address.city = "Mejicanos";
    p.address.state = "San Salvador";

    
    person* algorithmClass = NULL;
    
    return 0;
}