#include <iostream>
using namespace std;

class person
{
    public:
    int age;

    private:
    string location;

    public:
    string getage()
    {
        cout << "this person is " << age << " years old";
    }

    public:
    void setlocation(string s)
    {
        {location = s;}
    }

    public:
    void getlocation()
    {
        cout << "this person lives in " << location;
    }

};


int main()
{
    person caline;

    // PUBLIC VARIABLES, FUNCTIONS
    caline.age=33;
    caline.getage();

    // PRIVATE VARIABLES
    // impossible de faire : caline.location = "uccle",
    // car location est une variable PRIVATE de la classe person
    // On ne peut pas y acceder en dehors de la classe
    // On a donc defini 2 fonctions PUBLIC, dans la CLASSE:
    caline.setlocation("uccle");
    caline.getlocation();

    return 0;
}
