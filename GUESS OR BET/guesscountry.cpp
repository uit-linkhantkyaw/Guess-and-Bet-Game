#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
#include<conio.h>
using namespace std;

const int MAX_TRIES=5;
int letterFill (char, string, string&);

int main ()
{
    char choicecoun;
    int option,exit;
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
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
    if(choicecoun=='Y'|| choicecoun=='y')
        num_of_wrong_guesses=0;
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
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
    if(choicecoun=='Y'|| choicecoun=='y')
        num_of_wrong_guesses=0;
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
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
    if(choicecoun=='Y'|| choicecoun=='y')
        num_of_wrong_guesses=0;
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
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
    if(choicecoun=='Y'|| choicecoun=='y')
        num_of_wrong_guesses=0;
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
	cin.ignore();
	cin.get();
	cout << "\n\n-->Do you want to play again (y/n)? ";
            cin >> choicecoun;
    if(choicecoun=='Y'|| choicecoun=='y')
        num_of_wrong_guesses=0;
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



	return 0;
}

/* Take a one character guess and the secret word, and fill in the
 unfinished guessword. Returns number of characters matched.
 Also, returns zero if the character is already guessed. */

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

