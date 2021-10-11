#pragma once
#include<string>
#include<vector>
#include<fstream>
using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;

struct worker
{
    int id;
    string surname;
    string name;
    string post;
    string patronymic;
    double pay_per_hour;
    int hours;
    double solary(double pay_per_hour, int hours) { return pay_per_hour * hours; }
};

void menu();
worker addWorker(worker& w);
void show(vector<worker>& v);
void findWorker(vector<worker>& v);
void saveFile(vector<worker>& v, ofstream& fout, const string& filename);
void delWorker(vector<worker>& v);
void loadFile(vector<worker>& v, ifstream& fin, const string& filename);
void editWorker(vector<worker>& v);
void sortWorker(vector<worker>& v);
