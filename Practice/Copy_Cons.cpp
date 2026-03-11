#include<iostream>
using namespace std;

class book{
    private:
    int id;
    int price;

    public:
    book(int i, int p){
        id=i;
        price=p;
    }

    book(const book& b){
        id=b.id;
        price=b.price;
    }

    void display(string name){
        cout<<name<<"ID is: "<<id<<endl;
        cout<<name<<"Price is: "<<price<<endl;
    }
};

int main(){
    book b1(567,500);
    book b3(34,700);
    book b4(b1);
    book b5(b3);
    book b2(b1);
    b2.display("b2 ");
    b3.display("b3 ");
    b4.display("b4 ");
    b5.display("b5 ");
}
