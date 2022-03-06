#include <iostream>
using namespace std;

// template <class N1, class N2>
class Name
{
public:
    string firstname;
    string lastname;
    void takeName()
    {
        cout << "Enter your first name: ";
        getline(cin, firstname);
        cout << "Enter your last name: ";
        getline(cin, lastname);
    }
    string fullname = firstname + " " + lastname;
    void displayName()
    {
        cout << "Your firstname: " << firstname << "\n";
        cout << "Your lastname: " << lastname << "\n";
    }
    void displayFullname()
    {
        int input;
        cout << "Choose the option: \n";
        cout << "1. Do you want to see your fullname\n2. Exit\n-->";
        cin >> input;
        if (input == 1)
        {
            cout << "Your fullname: " << firstname + " " + lastname << "\n";
        }
        else
        {
            cout << "Exit" << exit << "\n";
        }
    }
};
// template <class i>
class ID
{
public:
    int id = 15463;
    int input;
    void takeinput()
    {
        cout << "Choose the option:\n";
        cout << "1. Generate your ID number\n2. Exit\n--> ";
        cin >> input;
    }
    void generateID()
    {
        if (input == 1)
        {
            cout << "Your ID: " << id << "\n";
        }
        else
        {
            cout << "Exit" << exit << "\n";
        }
    }
};
// template <class c1>
class Card : public Name, public ID
{
public:
    int input;
    void create()
    {
        cout << "Choose the option: \n";
        cout << "1. Create your identity card\n2. Exit\n-->";
        cin >> input;
        if (input == 1)
        {
            cout << "-----------Identity Card------------\n";
            cout << "  Name: " << fullname << "\n";
            cout << "  ID: " << id << "\n\n";
            cout << "           Signature: Mohammad Ammar\n";
        }
        else
        {
            cout << "Exit" << exit << "\n";
        }
    }
};

int main()
{
    Name objname;
    objname.takeName();
    objname.displayName();
    objname.displayFullname();

    ID objid;
    objid.takeinput();
    objid.generateID();

    Card objCard;
    objCard.create();
    return 0;
}