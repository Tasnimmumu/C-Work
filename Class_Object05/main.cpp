#include <iostream>

using namespace std;

class Employe{
public:
    int salary;
private :
    void setSalary(int s){
        salary =s;
    }
    int getSalary(){
        return salary;
    }

};

int main()
{
    Employe myobj;
    myobj.setSalary(50000);
    cout<< myobj.getSalary();

    return 0;
}
