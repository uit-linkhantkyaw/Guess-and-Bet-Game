#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
#include <conio.h>
using namespace std;

//guess
void guess();
const int MAX_TRIES=5;
int letterFill (char, string, string&);

//bet
void bet();
void drawLine(int n, char symbol);
void rules();
void rules1();
void rules2();


int main()
{
    int gameOpt;
    char gameExit = 'N';
    int flag=1;
    start: cout << "*************Welcome to \"GUESS AND BET\"*************" <<endl;
    cout << "\nWe have two games"<< endl<<"\n\(1\) \"GUESS\"\tand\t\(2\) \"BET\""<<endl;
    cout << "\n\t\t\t\tTo exit,Enter 0"<<endl;
    cout << "\nEnter the option you wish to play : ";
    cin  >> gameOpt;
    while(flag==1)
    {
        if(gameOpt==0)
        {
            flag=0;
            system("cls");
        }
        else if(gameOpt!=1 && gameOpt!=2)
        {
            cout << "\nInvalid input!! Please enter either (1) or (2) to play : ";
            cin  >> gameOpt;
            flag=1;
        }

        else
        {
            flag=0;
        }

    }
    while(gameExit=='N'||gameExit=='n')
    {
        if(gameOpt==1)
        {
            system("cls");
            guess();
            system("cls");
            goto start;
        }
        else if(gameOpt==2)
        {
            system("cls");
            bet();
            system("cls");
            goto start;
        }
        else
        {
            cout << "Thank you for playing!!"<<endl;
            gameExit='Y';
        }
    }
    return 0;
}


//Guess game
void guess()
{
    char choicecoun;
    int option,exit;
    bool invalid=true;
	string name;
	char letter;
	int num_of_wrong_guesses=0;
	string asiaword,europeword,americaword,africaword,word;
	string asiawords[] =
	{
		"india",
		"pakistan",
		"nepal",
		"malaysia",
		"philippines",
		"myanmar",
		"iran",
		"china",
		"oman",
		"indonesia",
		"russia",
		"korea",
		"thailand",
		"japan",
		"singapore",
		"mongolia",
		"qatar",
		"afghanistan"
	};

	string europewords[]=
	{
	    "finland",
	    "sweden",
	    "norway",
	    "france",
	    "italy",
	    "germany",
	    "spain",
	    "britain",
	    "ireland",
	    "poland",
	    "ukraine",
	    "netherlands",
	    "denmark",
	    "portugal",
	    "greece",
	    "croatia",
	    "belgium",
	    "swizerland"
	};

	string americawords[]=
	{
	    "unitedstates",
	    "canada",
	    "mexico",
	    "brazil",
	    "argentina",
	    "chile",
	    "peru",
	    "venezuela",
	    "ecuador",
	    "colombia",
	    "cuba",
	    "haiti",
	    "dominican",
	    "barbados",
	    "costarica"
	};

	string africawords[]=

	{
	    "algeria",
	    "egypt",
	    "libya",
	    "mali",
	    "niger",
	    "sudan",
	    "ethiopia",
	    "angola",
	    "namibia",
	    "southafrica",
	    "kenya",
	    "somalia",
	    "zambia",
	    "zimbabwe",
	    "morocco",
	    "nigeria",
	    "mozambique",
	    "madagascar"
	};
	string words[]=
	{
	    "india",
		"pakistan",
		"nepal",
		"malaysia",
		"philippines",
		"myanmar",
		"iran",
		"china",
		"oman",
		"indonesia",
		"russia",
		"korea",
		"thailand",
		"japan",
		"singapore",
		"mongolia",
		"qatar",
		"afghanistan",
		"finland",
	    "sweden",
	    "norway",
	    "france",
	    "italy",
	    "germany",
	    "spain",
	    "britain",
	    "ireland",
	    "poland",
	    "ukraine",
	    "netherlands",
	    "denmark",
	    "portugal",
	    "greece",
	    "croatia",
	    "belgium",
	    "swizerland",
	    "unitedstates",
	    "canada",
	    "mexico",
	    "brazil",
	    "argentina",
	    "chile",
	    "peru",
	    "venezuela",
	    "ecuador",
	    "colombia",
	    "cuba",
	    "haiti",
	    "dominican",
	    "barbados",
	    "costarica",
	    "algeria",
	    "egypt",
	    "libya",
	    "mali",
	    "niger",
	    "sudan",
	    "ethiopia",
	    "angola",
	    "namibia",
	    "southafrica",
	    "kenya",
	    "somalia",
	    "zambia",
	    "zimbabwe",
	    "morocco",
	    "nigeria",
	    "mozambique",
	    "madagascar"
	};

	//choose and copy a word from array of words randomly





	// welcome the user
	cout << "\n\nWelcome to GUESS...Guess a country Name";
	cout << "\n\nEach letter is represented by a star.";
	cout << "\n\nYou have to type only one letter in one try";
	cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word.";
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    myCountry: cout << "\nEnter the continent option you want to play :\n";
    cout << "(1) Asia\n";
    cout << "(2) Europe\n";
    cout << "(3) America\n";
    cout << "(4) Africa\n";
    cout << "\nIf you want to play a harder game.You can choose :\n";
    cout << "(5) All Countries\n\n";
    cout << "Enter your option : ";
    cin >> option;
    while(invalid==true)
    {
        if(option>0 && option<6)
        {
            invalid=false;
        }
        else
        {
            cout << "\nInvalid option!! \nPlease enter 1 to 5 : ";
            cin  >> option;
        }
    }
    system("cls");
if(option==1)
    {
   do{

    srand(time(NULL));
	int as=rand()% 18;
	asiaword=asiawords[as];
	string asUnknown(asiaword.length(),'*');


        while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << asUnknown;
		cout << "\n\nGuess a letter: ";
        letter = getche();
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, asiaword, asUnknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (asiaword==asUnknown)
		{
			cout << asiaword << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "The word was : " << asiaword<< endl;
	}
	num_of_wrong_guesses=0;
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
    system("cls");
          }while(choicecoun =='Y'|| choicecoun=='y');

        cout << "\nEnter the exit option : "<<endl;
        cout << "(1)exit to menu."<<endl;
        cout << "(2)exit to main menu."<<endl;
        cout << "Enter the option: ";
        cin >> exit;
        if(exit==1)
        {
            system("cls");
            goto myCountry;
        }


    }


    else if(option==2)
    {
   do{

    srand(time(NULL));
	int eu=rand()% 18;
	europeword=europewords[eu];
	string euUnknown(europeword.length(),'*');


        while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << euUnknown;
		cout << "\n\nGuess a letter: ";
        letter = getche();
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, europeword, euUnknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (europeword==euUnknown)
		{
			cout << europeword << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "The word was : " << europeword << endl;
	}
	num_of_wrong_guesses=0;
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;


            system("cls");
          }while(choicecoun =='Y'|| choicecoun=='y');

        cout << "\nEnter the exit option : "<<endl;
        cout << "(1)exit to menu."<<endl;
        cout << "(2)exit to main menu."<<endl;
        cout << "Enter the option: ";
        cin >> exit;
        if(exit==1)
        {
            system("cls");
            goto myCountry;
        }

    }
     else if(option==3)
    {
   do{

    srand(time(NULL));
	int am=rand()% 15;
	americaword=americawords[am];
	string amUnknown(americaword.length(),'*');


        while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << amUnknown;
		cout << "\n\nGuess a letter: ";
        letter = getche();
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, americaword, amUnknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (americaword==amUnknown)
		{
			cout << americaword << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "The word was : " << americaword << endl;
	}
	num_of_wrong_guesses=0;
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
            system("cls");
          }while(choicecoun =='Y'|| choicecoun=='y');

        cout << "\nEnter the exit option : "<<endl;
        cout << "(1)exit to menu."<<endl;
        cout << "(2)exit to main menu."<<endl;
        cout << "Enter the option: ";
        cin >> exit;
        if(exit==1)
        {
            system("cls");
            goto myCountry;
        }

    }


    else if(option==4)
    {
   do{

    srand(time(NULL));
	int af=rand()% 18;
	africaword=africawords[af];
	string afUnknown(africaword.length(),'*');


        while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << afUnknown;
		cout << "\n\nGuess a letter: ";
        letter = getche();
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, africaword, afUnknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (africaword==afUnknown)
		{
			cout << africaword << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "The word was : " << africaword << endl;
	}
	num_of_wrong_guesses=0;
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
            system("cls");
          }while(choicecoun =='Y'|| choicecoun=='y');

        cout << "\nEnter the exit option : "<<endl;
        cout << "(1)exit to menu."<<endl;
        cout << "(2)exit to main menu."<<endl;
        cout << "Enter the option: ";
        cin >> exit;
        if(exit==1)
        {
            system("cls");
            goto myCountry;
        }
    }


    else if(option==5)
    {
   do{

    srand(time(NULL));
	int all=rand()% 69;
	word=words[all];
	string allUnknown(word.length(),'*');


        while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << allUnknown;
		cout << "\n\nGuess a letter: ";
        letter = getche();
		// Fill secret word with letter if the guess is correct,
		// otherwise increment the number of wrong guesses.
		if (letterFill(letter, word, allUnknown)==0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}
		// Tell user how many guesses has left.
		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;
		// Check if user guessed the word.
		if (word==allUnknown)
		{
			cout << word << endl;
			cout << "Yeah! You got it!";
			break;
		}
	}
	if(num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
		cout << "The word was : " << word << endl;
	}
	num_of_wrong_guesses=0;
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
            system("cls");
          }while(choicecoun =='Y'|| choicecoun=='y');

        cout << "\nEnter the exit option : "<<endl;
        cout << "(1)exit to menu."<<endl;
        cout << "(2)exit to main menu."<<endl;
        cout << "Enter the option: ";
        cin >> exit;
        if(exit==1)
        {
            system("cls");
            goto myCountry;
        }
    }
}
int letterFill (char guess, string secretword, string &guessword)
{
	int i;
	int matches=0;
	int len=secretword.length();
	for (i = 0; i< len; i++)
	{
		// Did we already match this letter in a previous guess?
		if (guess == guessword[i])
			return 0;
		// Is the guess in the secret word?
		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;


}

//Bet game
void bet()
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
    cin  >> playerName;

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
        cin.ignore();
        cin.get();
        system("cls");
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
        cin.ignore();
        cin.get();
        system("cls");
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
        cin.ignore();
        cin.get();
        system("cls");
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
