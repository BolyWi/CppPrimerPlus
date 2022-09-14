#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person() { lname = ""; fname[0] = '\0'; }
    Person(const string &ln, const char *fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    fname[0] = *fn;
}

void Person::Show() const
{
    int i = 0;
    while(i < LIMIT && fname[i] != '\0')
    {
        cout << fname[i];
        i++;
    }    
    cout << lname << endl;
}

void Person::FormalShow() const
{
    cout << lname << " " << fname << endl;
}

int main(int argc, char **argv)
{
    Person person("Jack");
    person.Show();
    return 0;
}