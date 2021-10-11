/*
    To develop a program in which the menu will be organized, the choice of menu functions should be organized by the function key. All information should be stored in an array of structures, with the ability to write them to a file. Organize data sorting by various methods (fast, Shell, Bubble), the output of the sorting results should be in tabular form.

    Functions of the program:
    - function for user input;
    - function for writing data to a file;
    - reading data from a file;
    - displaying data on the screen;
    - data addition;
    - deletion of data;
    - search for information by attribute;
    - sorting by various methods;

    Composition and structure of source data

Table "staffing table" with fields:

   - "Name of the employee"
   - "Number of hours worked"
   - "position"
   - "Pay per hour of work"
   - "Assignable id"
   - calculated field "salary"

Note: Salary = hours worked multiplied by hourly pay.
*/
#include <iostream>
#include"worker.h"
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;

int main()
{
    worker w;
    vector<worker>v;
    string filename = "worker.txt";
    ofstream fout;
    ifstream fin;
    char exit;
    do
    {
        menu();
        char key;
        cout<<"Make your choice: "; cin >> key;
        key = tolower(key);
        switch (key)
        {
        case 'n':
            v.push_back(addWorker(w));
            break;
        case 'v':
            show(v);
            break;
        case 'f':
            findWorker(v);
            break;
        case's':
            saveFile(v, fout, filename);
            break;
        case'd':
            delWorker(v);
            break;
        case'r':
            loadFile(v, fin, filename);
            break;
        case'e':
            editWorker(v);
            break;
        case'c':
            sortWorker(v);
            break;
        default:
            cout << "You entered not correct key!\n";
            break;
        }

        cout << "If you want to quite, press 'q': "; cin >> exit;
    } while (exit!='q');
    

    return 0;
}


