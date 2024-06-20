#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct People {
    string Prizv;
    string phone;
};
int main()
{   //1
    /*ofstream file("abonement.txt");
    if (!file) {
        cout << "File not find\n";
        return 1;
    }
    int ans, count = 0, abonent;
    People Abonents[5];
    do {
        cout << "Input " << count + 1 << " abonent: ";
        getline(cin, Abonents->Prizv);
        getline(cin, Abonents->phone);
        file << count + 1 << ") " << Abonents->Prizv << ' ' << Abonents->phone << endl;
        cout << "Do you have abonents Yes[1] No[2]: ";
        cin >> ans;
        count++;
        cin.ignore();
    } while (ans == 1);
    file.close();
    ifstream filee("abonement.txt");
    if (!filee) {
        cout << "File not find\n";
        return 1;
    }
    string s;
    cout << "Print all list[1] or one abonent[2]: ";
    cin >> abonent;
    switch (abonent) {
        case 1:
            while (getline(filee, s)) {
                cout << s << endl;
            }
            break;
        case 2:
            char num;
            cout << "Input people's number for information: ";
            cin >> num;
            while (getline(filee, s)) {
                char sd[30];
                for (char sd : s) {
                    if (sd == num) {
                        cout << s;
                        break;
                    }
                    else break;
                }

            }
            break;
    filee.close();
    }*/
    //2 and 3
    /*ifstream read("read.txt");
    ofstream w1("w1.txt");
    ofstream w2("w2.txt");
    if (!read) {
        cout << "File not find\n";
        return 1;
    }
    if (!w1) {
        cout << "File not find\n";
        return 1;
    }
    if (!w2) {
        cout << "File not find\n";
        return 1;
    }
    string s;
    string st[5];
    int count = 0,count2=0;
    while (getline(read, s)) {
        w1 << s << endl;
        st[count] = s;
        count++;
    }
    reverse(st, st + 5);
    for (short i = 0; i < 5; i++) {
        w2 << st[i] << endl;
    }
    cout << "Writing complete" << endl<< "Reverse writing complete" << endl;
    read.close();
    w1.close();
    w2.close();
    */
    //4
    ofstream read2("read2.txt",ios::app);
    ifstream read2_2("read2.txt", ios::app);
    if (!read2) {
        cout << "File not find\n";
        return 1;
    }
    string s;
    string st[6];
    int space = 0;
    char ch[150];
    while (read2_2) {
        read2_2.getline(ch, 150);
        for (char i : ch) {
            if (i == ' ') space++;
        }
    }
    cout <<space;
    if (space == 0) {
        for (short i = 0; i < 7; i++) {
            if (i == 6) read2 << "------------";
        }
    }
    else {
        read2 << endl << "------------";
    }
}
