// user-cli-menu.cpp


#include <iostream>


void displayMenu();
void selection1();
void selection2();
void selection3();
void selection4();
void quit();


void menuRun()
{
    int userSelection;

    while (true)
    {
        displayMenu();
        std::cin >> userSelection;

        switch (userSelection)
        {
        case 1:
            selection1();
            break;
        case 2:
            selection2();
            break;
        case 3:
            selection3();
            break;
        case 4:
            selection4();
            break;
        case 5:
            quit();
        case 6:
            return;
        default:
            std::cout << "Invalid Selection... Please Make a Different Selection or Type \"Quit\" (\"Q\") to Exit the Menu." << std::endl;
            break;
        }
    }
}