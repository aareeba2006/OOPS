#include<iostream>
using namespace std;

class Character{
    private:
    int *health;
    int *attackPower;
    int *defense;

    public:

    // Default Constructor
    Character (){
        health = new int(50);
        attackPower = new int(40);
        defense = new int(30);
    }

    // Parameter Constructor
    Character (int h, int a, int d){
        health = new int(h);
        attackPower = new int(a);
        defense = new int(d);
    }

    // Copy Constructor
    Character(const Character & c){
          health = new int(*(c.health));
        attackPower = new int(*(c.attackPower));
        defense = new int(*(c.defense));
    }

        // Getter methods
    int getHealth() const { return *health; }
    int getAttackPower() const { return *attackPower; }
    int getDefense() const { return *defense; }

    // Setter methods
    void setHealth(int h) { *health = h; }
    void setAttackPower(int a) { *attackPower = a; }
    void setDefense(int d) { *defense = d; }

    // display
    void display(){
        cout<<"Health is: "<<*health<<endl;
        cout<<"attackPower is: "<<*attackPower<<endl;
        cout<<"defense is: "<<*defense<<endl;
    }

    ~Character(){
        delete health;
        delete attackPower;
        delete defense;
    }
      
};

int main(){
     // Using default constructor
    Character c1;
    
    // Using parameterized constructor
    Character c2(150, 70, 40);
    Character c3(200, 90, 60);

    // Using copy constructor
    Character c4(c3);   // copy of c3
    Character c5(c2);   // copy of c2

    // Display all characters
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();

    return 0;

}