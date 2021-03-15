
#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    string gender;
    // 1st version
    virtual void isMammal()  // abstract function - with out implementation
    {
        cout<<"I am a mammal ";
    }
    virtual void mate()
    {
        cout<<"I can reproduce"<<endl;
    }

    Animal(int tage,string tgender)
    {
        age = tage;
        gender = tgender;
    }
};
class Fish: virtual public Animal
{
private:
    int sizeInFt;
    bool canEat;
public:
    Fish(int tage, string tgender, int tsize,bool tcaneat):Animal(tage,tgender)
    {
        sizeInFt = tsize;
        canEat = tcaneat;
    }
    void swim()
    {
        cout<<"Fishes can swim"<<endl;
    }
    // Function  2 version
    virtual void isMammal()  // abstract function - with out implementation
    {
        cout<<"\nI am a not mammal ";
    }
    virtual void mate()
    {
        cout<< "\nFish can reproduce"<<endl;
    }
};
class Duck: virtual public Animal
{
public:
    string beakColor;
    Duck(int tage, string tgender, string tbeakColor): Animal(tage,tgender)
    {
        beakColor = tbeakColor;
    }
    virtual void isMammal()  // abstract function - with out implementation
    {
        cout<<"\nI am a mammal ";
    }
    virtual void mate()
    {
        cout<<"\nDucks can reproduce"<<endl;
    }
    void swim()
    {
        cout<<"Ducks can swim"<<endl;
    }
    void quack()
    {
        cout<<"Quack- The sound that a duck makes "<<endl;
    }
};
class Zebra: virtual public Animal
{
public:
    bool is_wild;
    Zebra(int tage, string tgender, bool tis_wild): Animal(tage,tgender)
    {
        is_wild=tis_wild;
    }
    virtual void isMammal()
    {
        cout<<"\nI am a mammal "<<endl;;
    }
    virtual void mate()
    {
        cout<<"Zebra can reproduce"<<endl;
    }
    void run()
    {
        cout<< "Zebra speed= 65km/h"<<endl;
    }
};
int main()
{
    Fish f = Fish(5, "male", 2,true);
    Animal *po = &f;
    po->isMammal();
    po->mate();
    f.swim();
    Duck d = Duck(13, "female", "yellow");
    Animal *pb = &d;
    pb->isMammal();
    pb->mate();
    d.swim();
    d.quack();
    Zebra z = Zebra(9, "male",true);
    Animal *pc = &z;
    pc->isMammal();
    pc->mate();
    z.run();
    return 0;
}
