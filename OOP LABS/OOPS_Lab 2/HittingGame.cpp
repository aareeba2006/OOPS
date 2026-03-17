#include<iostream>
using namespace std;

class HittingGame {
    private:
    int players;
    int yourhits;
    int enemyhits;

    public:
    HittingGame(int p){
        players = p;
        yourhits = 0;
        enemyhits = 0;
    }

    void playGame(){
        int num1,num2;
        cout<<"Number of players in your team: "<< players<<endl;
        for(int i=1; i<=players; i++){
            cout<<"Round "<<i<<endl;
            cout<<"Enter your first number: ";
            cin>>num1;
            cout<<"Enter your second number:";
            cin>>num2;

            if(num1==num2){
                cout << "Enemy got hit by your team!" << endl;
                yourhits++;
            } else {
                cout << "You got hit by the enemy team!" << endl;
                enemyhits++;
            }
            
        }
    }

    void showResult (){
        cout<<"Final result:"<<endl;
        
        if(yourhits > enemyhits){
            cout<<"Game over! Your team won"<<endl;
        } else if(enemyhits > yourhits){
            cout<<"Game over!Enemy team won"<<endl;
        } else {
            cout<<"Match Draw!"<<endl;
        } 
    }
};

int main(){
    HittingGame game(3);
    game.playGame();
    game.showResult();
}