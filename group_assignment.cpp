#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int year;
    int yearModTwelve;

    /* NO NEED TO EXPLAIN */
    time_t currTime = time(0);
    tm *currLocalTime = gmtime(&currTime);
    int currYear = currLocalTime->tm_year + 1900;
    string tense;
    string animalYear;

    do
    {
        cout << "Enter the year (minimum is 1900): ";
        cin >> year;

    } while (year < 1900);

    if (year < currYear)
    {
        tense = "was";
    }
    else if (year == currYear)
    {
        tense = "is";
    }
    else
    {
        tense = "will be";
    }

    yearModTwelve = year % 12;

    switch (yearModTwelve)
    {
    case 0:
        animalYear = "monkey";
        break;
    case 1:
        animalYear = "rooster";
        break;
    case 2:
        animalYear = "dog";
        break;
    case 3:
        animalYear = "pig";
        break;
    case 4:
        animalYear = "rat";
        break;
    case 5:
        animalYear = "ox";
        break;
    case 6:
        animalYear = "tiger";
        break;
    case 7:
        animalYear = "rabbit";
        break;
    case 8:
        animalYear = "dragon";
        break;
    case 9:
        animalYear = "snake";
        break;
    case 10:
        animalYear = "horse";
        break;
    case 11:
        animalYear = "sheep";
        break;
    default:
        cerr << "[ERROR] Something went wrong." << endl;
        return 1;
    }

    cout << "The year " << year << " " << tense << " the year of " << animalYear << "." << endl;

    return 0;
}