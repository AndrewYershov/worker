#include"worker.h"
#include<iostream>
using std::cout;
using std::cin;
void menu()
{
    cout << "N New worker.\n"; // +
    cout << "E Edit data.\n"; // +
    cout << "F Find worker.\n"; // +
    cout << "D Delete data.\n"; // +
    cout << "S Save to file.\n"; // +
    cout << "R Load from file.\n"; // +
    cout << "V Show all workers.\n"; // +
    cout << "C Sort data.\n"; // +
    cout << "Q Quit.\n";
}
worker addWorker(worker& w)
{
    cout << "Enter data: \n";
    cout << "id: "; cin >> w.id;
    cout << "Surname: "; cin >> w.surname;
    cout << "Name: "; cin >> w.name;
    cout << "Patronymic: "; cin >> w.patronymic;
    cout << "Post: "; cin >> w.post;
    cout << "Hr. pay: "; cin >> w.pay_per_hour;
    cout << "Hours: "; cin >> w.hours;
    return w;
}
void show(vector<worker>& v)
{
    if (!v.empty())
    {
        for (unsigned int i = 0; i < v.size(); i++)
        {
            cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n"
                << v[i].patronymic << "\n" << v[i].post << "\n" << v[i].hours << "\n" << v[i].pay_per_hour << "\n"
                << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl << std::endl;
        }
    }
    else
    {
        cout << "Empty!";
    }
}
void findWorker(vector<worker>& v)
{
    cout << "If you want to find the worker by name, press 'n'\n";
    cout << "If you want to find the worker by surname, press 's'\n";
    cout << "If you want to find the worker by id, press 'i'\n";
    cout << "If you want to find the worker by post, press 'p'\n";
    cout << "If you want to find the worker by hours, press 'h'\n";
    cout << "If you want to find the worker by pay per hour, press 'm'\n";
    cout << "If you want to find the worker by solary, press 'b'\n";
    char key;
    cout << "-> "; cin >> key;
    key = tolower(key);
    switch (key)
    {
    case'n':
    {
        string searchName;
        cout << "Enter the name you are looking for: "; cin >> searchName;
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (searchName == v[i].name)
                cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n"
                << v[i].patronymic << "\n" << v[i].post << "\n" << v[i].hours << "\n" << v[i].pay_per_hour << "\n"
                << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl << std::endl;
        }
        break;
    }

    case's':
    {
        string searchSurname;
        cout << "Enter the surname you are looking for : "; cin >> searchSurname;
        for (unsigned int i = 0; i < v.size(); i++) //  I used 'unsigned int' because error 4018 
        {
            if (searchSurname == v[i].surname)
                cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n"
                << v[i].patronymic << "\n" << v[i].post << "\n" << v[i].hours << "\n" << v[i].pay_per_hour << "\n"
                << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl << std::endl;
        }
        break;
    }

    case'i':
    {
        int searchId;
        cout << "Enter the id you are looking for: "; cin >> searchId;
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (searchId == v[i].id)
                cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n"
                << v[i].patronymic << "\n" << v[i].post << "\n" << v[i].hours << "\n" << v[i].pay_per_hour << "\n"
                << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl << std::endl;
        }
        break;
    }

    case'p':
    {
        string searchPost;
        cout << "Enter the post you are looling for: "; cin >> searchPost;
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (searchPost == v[i].post)
                cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n"
                << v[i].patronymic << "\n" << v[i].post << "\n" << v[i].hours << "\n" << v[i].pay_per_hour << "\n"
                << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl << std::endl;
        }
        break;
    }

    case'h':
    {
        int searchHours;
        cout << "Enter the hours you are looking for: "; cin >> searchHours;
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (searchHours == v[i].hours)
                cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n"
                << v[i].patronymic << "\n" << v[i].post << "\n" << v[i].hours << "\n" << v[i].pay_per_hour << "\n"
                << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl << std::endl;
        }
        break;
    }

    case'm':
    {
        double searchPerH;
        cout << "Enter the pay per hour you are looking for: "; cin >> searchPerH;
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (searchPerH == v[i].pay_per_hour)
                cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n"
                << v[i].patronymic << "\n" << v[i].post << "\n" << v[i].hours << "\n" << v[i].pay_per_hour << "\n"
                << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl << std::endl;
        }
        break;
    }

    case'b':
    {
        double searchSolary;
        cout << "Enter the solary you are looking for: "; cin >> searchSolary;
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (searchSolary == v[i].solary(v[i].pay_per_hour, v[i].hours))
            {
                cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n"
                    << v[i].patronymic << "\n" << v[i].post << "\n" << v[i].hours << "\n" << v[i].pay_per_hour << "\n"
                    << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl << std::endl;
            }
        }
        break;
    }

    default:
        cout << "Not correct key!\n";
        break;
    }
}

void saveFile(vector<worker>& v, ofstream& fout, const string& filename)
{
    cout << "If you want to add data from the current session to the end of the file, press 1.\n"; // 1. зробити додавання даних з поточного сеансу в кінець файлу 2. додавання даних з поточного сеансу і замінити вміст файлу
    cout << "If your want to add new data from the current session and delete previous data, press 2.\n";
    char key;
    cout << "-> "; cin >> key;
    if (key == '1')
    {
        fout.open(filename, std::ios::app); // adding to the end of the file
        if (!fout.is_open())
        {
            std::cerr << "Can`t open " << filename << " file for output.\n";
            exit(EXIT_FAILURE);
        }
        else
        {
            for (unsigned int i = 0; i < v.size(); i++)
            {
                fout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n" << v[i].patronymic << "\n" << v[i].post
                    << "\n" << v[i].pay_per_hour << "\n" << v[i].hours << "\n" << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl;
            }
        }
        cout << "Data added to the end of the file.\n";
    }
    if (key == '2')
    {
        fout.open(filename, std::ios::trunc); // adding data and delete previouse data
        if (!fout.is_open())
        {
            std::cerr << "Can`t open " << filename << " file for output.\n";
            exit(EXIT_FAILURE);
        }
        else
        {
            for (unsigned int i = 0; i < v.size(); i++)
            {
                fout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n" << v[i].patronymic << "\n" << v[i].post
                    << "\n" << v[i].pay_per_hour << "\n" << v[i].hours << "\n" << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl;
            }
        }
    }
    fout.close();
}

void delWorker(vector<worker>& v)
{
    cout << "The list of workers have " << v.size() - 1 << " workers";
    if (!v.empty())
    {
        unsigned int number;
        cout << "Enter the number of the worker you want to delete: "; cin >> number;
        if (number < v.size())
        {
            v.erase(v.begin() + number);
        }
        else
        {
            cout << "Your number is more.\n";
        }

    }
    else
    {
        cout << "You cannot remove a worker from the list.\nThe list of workers is empty.\n";
    }
}

void loadFile(vector<worker>& v, ifstream& fin, const string& filename)
{
    fin.open(filename);
    if (!fin.is_open())
    {
        std::cerr << "Can`t open " << filename << " file for output.\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        char ch;
        while (fin.get(ch))
        {
            cout << ch;
        }
    }
    fin.close();
}

void editWorker(vector<worker>& v)
{
    string searchName;
    cout << "Enter the worker`s name whose data you want to edit: "; cin >> searchName;
    for (unsigned int i = 0; i < v.size(); i++)
    {
        if (searchName == v[i].name)
        {
            cout << v[i].id << "\n" << v[i].surname << "\n" << v[i].name << "\n" << v[i].patronymic << "\n" << v[i].post
                << "\n" << v[i].pay_per_hour << "\n" << v[i].hours << "\n" << v[i].solary(v[i].pay_per_hour, v[i].hours) << std::endl;
            cout << "If you want to edit:\n";
            cout << "name, press 1\n";
            cout << "surname, press 2\n";
            cout << "id, press 3\n";
            cout << "hours, press 4\n";
            cout << "pay per hour, press5\n";
            cout << "patronymic, press 6\n";
            char key;
            cout << "-> "; cin >> key;
            if (key == '1')
            {
                string newName;
                cin >> newName;
                v[i].name = newName;
            }
            if (key == '2')
            {
                string newSurname;
                cin >> newSurname;
                v[i].surname = newSurname;
            }
            if (key == '3')
            {
                int newId;
                cin >> newId;
                v[i].id = newId;
            }
            if (key == '4')
            {
                int newHours;
                cin >> newHours;
                v[i].hours = newHours;
                v[i].solary(v[i].pay_per_hour, v[i].hours);
            }
            if (key == '5')
            {
                double newPay_per_hour;
                cin >> newPay_per_hour;
                v[i].pay_per_hour = newPay_per_hour;
                v[i].solary(v[i].pay_per_hour, v[i].hours);
            }
            if (key == '6')
            {
                string newPatronymic;
                cin >> newPatronymic;
                v[i].patronymic = newPatronymic;
            }

        }
    }
}
void sortWorker(vector<worker>& v)
{
    // bubble sort
    for(unsigned int i=0;i<v.size()-1;i++)
    {
        for (unsigned int j = v.size()-1; j > i; j--)
        {
            if (v[j].id < v[j - 1].id)
            {
                std::swap(v[j], v[j - 1]);
            }
        }
    }
}
