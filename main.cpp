/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

double getAverage(const vector<int>& ids) {
    double sum = 0;
    for (int id : ids) {
        sum += id;
    }
    return sum / ids.size();
}

int getHighest(const vector<int>& ids) {
    int highest = ids[0];
    for (int id : ids) {
        if (id > highest) {
            highest = id;
        }
    }
    return highest;
}

int main()
{
    //Scenario 2 
    vector<int> studentIDs = {67, 69, 420, 21, 23, 24, 10, 22, 87, 14};

    cout << "Average Student ID: " << getAverage(studentIDs) << endl;
    cout << "Highest Student ID: " << getHighest(studentIDs) << endl;
    
    //Scenario 1
    vector<string> menu;
    
    menu.push_back("Chicken Tenders");
    menu.push_back("Shrimp Alfredo");
    menu.push_back("Smoked Salmon");
    menu.push_back("Pineapple Pizza");
    menu.push_back("General Tso Chicken & Rice");
    
    menu.insert(menu.begin() + 1, "Buffalo Wings");
    
    menu.erase(menu.begin() + 3);
    
    cout << "\n**Today's Cafeteria Menu**\n" << endl;
    for (string& dish : menu) {
        cout << dish << endl;
    }
    
    return 0;
}