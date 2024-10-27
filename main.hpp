#include <iostream>
#include <fstream>
using namespace std;
/***************************************************
 * Code your program here
 ***************************************************/
int writeFile(string);
int readFile(string);

int writeFile(string file) {
    ofstream writer;
    writer.open(file);
    int N, ID, Wage;
    string name, Department;
    cin >> N;
    writer << N << "\n";
    for (int i = 0; i < N; i++) {
        cin >> ID >> name >> Department >> Wage;
        writer << ID << "\t" << name << "\t" << Department << "\t" << Wage << "\n";
    }
    writer.close();
    return N;
}

int readFile(string file) {
    ifstream reader;
    reader.open(file);
    int N, ID, Wage;
    string name, Department;
    reader >> N;
    for (int i = 0; i < N; i++) {
        reader >> ID >> name >> Department >> Wage;
        cout << ID << " " << name << " " << Department << " " << Wage << "\n";
    }
    reader.close();
    return N;
}