#include <iostream>
#include <vector>

using namespace std;

class Pet
{
public:
    Pet();
    virtual void printDescription(){};
    string name;
    bool neuterSpayed;
    bool talks;

    void setname(string c ){
        name =c;

    }
    string getname(){
        return name;
    }

    void setNeuterSayed ( bool x )
    {
        neuterSpayed = x;
    }
    bool getNeuterSayed ( )
    {
        return neuterSpayed ;
    }

};


Pet::Pet() : neuterSpayed(false), talks(false)
{ }

class cat : public Pet
{
public:
    void printDescription()
    {
        string NS = "true";
        if ( neuterSpayed == false ) NS = "False";
        cout << "Name of cat    :  " << this->name << endl
             << "Nspayed of cat :  " << NS << endl;
    }
};
class dog : public Pet
{
public:
    void printDescription()
    {
        string NS = "true";
        if ( neuterSpayed == false ) NS = "False";
        cout << "Name of dog    :  " << this->name << endl
             << "Nspayed of dog :  " << NS << endl;
    }
};
class bird  : public Pet
{
public:
    void printDescription()
    {
        string talksSTR = "true";
        if ( talks == false ) talksSTR = "False";
        cout << "Name of bird    :  " << this->name << endl
             << "talk  :  " << talksSTR << endl;
    }
};


int main()
{

    vector < Pet* > vec;

    int loop;
    cout << "Enter num of animal :  "<<endl;
    cin >> loop;

    for ( int i = 0; i < loop; i++ )
    {
        int type;
        cout << "  if your pet is cat enter number (0)  "<<endl<< "if your pet is dog  enter number (1)"<<endl<< "if your pet is bird enter number (2) "<<endl;
        cin >> type;

        if ( type == 0 )
        {
            Pet* object = new cat();

            string catname;
            cout<< "what's name your cat ? "<<endl;
             cin >> catname;
            object->setname( catname );

            bool NScat;
            cout<< " if your cat neture spayed enter number (1) "<<endl<< " if your cat not netuer spayed  enter number (0) "<<endl;
             cin >> NScat;
            object->setNeuterSayed(NScat);
            vec.push_back( object );
        }
        else if ( type == 1 )
        {
            Pet* object = new dog();

            string dogname;
            cout<< "what's name your dog ? "<<endl;
             cin >> dogname;
            object->setname( dogname );

            bool NSdog;
            cout<< "if your dog neture spayed enter number (1) "<<endl<< "if your dog not netuer spayed  enter number (0)"<<endl;
            cin >> NSdog;
            object->setNeuterSayed(NSdog);
            vec.push_back( object );
        }
        else if ( type == 2 )
        {
            Pet* object = new cat();

            string birdname;
            cout<< "what's name your bird ? "<<endl;
             cin >> birdname;
            object->setname( birdname );

cout<< "if your bird can talk enter number (1) "<<endl<< "if your bird can not talk enter number (0)"<<endl;

            cin >> object->talks;
            vec.push_back( object );
        }

    }

    for ( int i = 0; i < vec.size(); i++ )
    {
        vec[i]->printDescription();
    }

    return 0;
}
