#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;

void drawLine(int n, char symbol);
void rules();
void rules1();
void rules2();
int main()
{
    int exit=0;
    int flag=0;
    string playerName;
    int amount; // hold player's balance amount
    int bettingAmount;
    int guess;
    int dice; // hold computer generated number
    char choice;
    int play;
    srand(time(0)); // "Seed" the random generator

    drawLine(60,'_');
    cout << "\n\n\n\t\tCASINO GAME\n\n\n\n";
    drawLine(60,'_');

    cout << "\n\nEnter Your Name : ";
    getline(cin, playerName);

    cout << "\n\nEnter Deposit amount to play game : $";
    cin >> amount;
     mylabel: cout<<"\nWhich range do you want to play: ";
     cout<<"\n(1)1 to 5";
     cout<<"\n(2)1 to 10";
     cout<<"\n(3)1 to 20";
     cout<<"\nChoose your option : ";
     cin>>play;

     for(int n=1;n<4;n++)
            {
                    if(play==n)
                    {
                        flag=1;
                    }
            }
            while(flag==0)
            {
                cout << "Invalid Number. \nChoose your option again : ";
                cin>> play;
                for(int n=1;n<4;n++)
            {
                    if(play==n)
                    {
                        flag=1;
                    }
            }
            }
        if(play==1){

        do
        {
            system("cls");
            rules();
            cout << "\n\nYour current balance is $ " << amount << "\n";
            int play;

            // Get player's betting amount
            do
            {
                cout <<playerName<<", enter money to bet : $";
                cin >> bettingAmount;
                if(bettingAmount > amount)
                    cout << "Your betting amount is more than your current balance\n"
                           <<"\nRe-enter data\n ";
            }while(bettingAmount > amount);

            // Get player's numbers

            do
            {
                cout << "Guess your number to bet between 1 to 5 :";
                cin >> guess;
                if(guess <= 0 || guess > 5)
                    cout << "Please check the number!! should be between 1 to 10\n"
                        <<"\nRe-enter data\n ";
            }while(guess <= 0 || guess > 5);

            dice = rand()%5 + 1; // Will hold the randomly generated integer between 1 and 10

            if(dice == guess)
            {
                cout << "\n\nGood Luck!! You won Rs." << bettingAmount * 3;
                amount = amount + bettingAmount * 3;
            }
            else
            {
                cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
                amount = amount - bettingAmount;
            }

            cout << "\nThe winning number was : " << dice <<"\n";
            cout << "\n"<<playerName<<", You have $ " << amount << "\n";
            if(amount == 0)
            {
                cout << "You have no money to play ";
                break;
            }
            cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choice;
        }while(choice =='Y'|| choice=='y');

        cout << "\n\n\n";
        drawLine(70,'=');
        cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
        drawLine(70,'=');

        cout << "\nEnter the exit option : "<<endl;
        cout << "(1)exit to menu."<<endl;
        cout << "(2)exit to main menu."<<endl;
        cout << "Enter the option: ";
        cin >> exit;
        if(exit==1)
        {
            goto mylabel;
        }
        }
        else if(play==2){

        do
        {
            system("cls");
            rules1();
            cout << "\n\nYour current balance is $ " << amount << "\n";
            int play;

            // Get player's betting amount
            do
            {
                cout <<playerName<<", enter money to bet : $";
                cin >> bettingAmount;
                if(bettingAmount > amount)
                    cout << "Your betting amount is more than your current balance\n"
                           <<"\nRe-enter data\n ";
            }while(bettingAmount > amount);

            // Get player's numbers

            do
            {
                cout << "Guess your number to bet between 1 to 10 :";
                cin >> guess;
                if(guess <= 0 || guess > 10)
                    cout << "Please check the number!! should be between 1 to 10\n"
                        <<"\nRe-enter data\n ";
            }while(guess <= 0 || guess > 10);

            dice = rand()%10 + 1; // Will hold the randomly generated integer between 1 and 10

            if(dice == guess)
            {
                cout << "\n\nGood Luck!! You won " << bettingAmount * 10;
                amount = amount + bettingAmount * 10;
            }
            else
            {
                cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
                amount = amount - bettingAmount;
            }

            cout << "\nThe winning number was : " << dice <<"\n";
            cout << "\n"<<playerName<<", You have $ " << amount << "\n";
            if(amount == 0)
            {
                cout << "You have no money to play ";
                break;
            }
            cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choice;
        }while(choice =='Y'|| choice=='y');

        cout << "\n\n\n";
        drawLine(70,'=');
        cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
        drawLine(70,'=');
        cout << "\nEnter the exit option : "<<endl;
        cout << "(1)exit to menu."<<endl;
        cout << "(2)exit to main menu."<<endl;
        cout << "Enter the option: ";
        cin >> exit;
        if(exit==1)
        {
            goto mylabel;
        }

        }
        else if(play==3){

        do
        {
            system("cls");
            rules1();
            cout << "\n\nYour current balance is $ " << amount << "\n";
            int play;

            // Get player's betting amount
            do
            {
                cout <<playerName<<", enter money to bet : $";
                cin >> bettingAmount;
                if(bettingAmount > amount)
                    cout << "Your betting amount is more than your current balance\n"
                           <<"\nRe-enter data\n ";
            }while(bettingAmount > amount);

            // Get player's numbers

            do
            {
                cout << "Guess your number to bet between 1 to 20 :";
                cin >> guess;
                if(guess <= 0 || guess > 20)
                    cout << "Please check the number!! should be between 1 to 20\n"
                        <<"\nRe-enter data\n ";
            }while(guess <= 0 || guess > 20);

            dice = rand()%20 + 1; // Will hold the randomly generated integer between 1 and 10

            if(dice == guess)
            {
                cout << "\n\nGood Luck!! You won " << bettingAmount * 20;
                amount = amount + bettingAmount * 20;
            }
            else
            {
                cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
                amount = amount - bettingAmount;
            }

            cout << "\nThe winning number was : " << dice <<"\n";
            cout << "\n"<<playerName<<", You have $ " << amount << "\n";
            if(amount == 0)
            {
                cout << "You have no money to play ";
                break;
            }
            cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choice;
        }while(choice =='Y'|| choice=='y');

        cout << "\n\n\n";
        drawLine(70,'=');
        cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
        drawLine(70,'=');

        cout << "\nEnter the exit option : "<<endl;
        cout << "(1)exit to menu."<<endl;
        cout << "(2)exit to main menu."<<endl;
        cout << "Enter the option: ";
        cin >> exit;
        if(exit==1)
        {
            goto mylabel;
        }

        }
        else {
            cout<<"Invalid! try again";
        }

    return 0;
}

void drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
        cout << symbol;
    cout << "\n" ;
}

void rules()
{
    system("cls");
    cout << "\n\n";
    drawLine(80,'-');
    cout << "\t\tRULES OF THE GAME\n";
    drawLine(80,'-');
    cout << "\t1. Choose any number between 1 to 5\n";
    cout << "\t2. If you win you will get 3 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(80,'-');
}
void rules1()
{
    system("cls");
    cout << "\n\n";
    drawLine(80,'-');
    cout << "\t\tRULES OF THE GAME\n";
    drawLine(80,'-');
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(80,'-');
}
void rules2()
{
    system("cls");
    cout << "\n\n";
    drawLine(80,'-');
    cout << "\t\tRULES OF THE GAME\n";
    drawLine(80,'-');
    cout << "\t1. Choose any number between 1 to 20\n";
    cout << "\t2. If you win you will get 30 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(80,'-');
}
// END OF PROGRAM

