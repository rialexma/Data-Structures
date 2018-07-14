#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <ctype.h>
using namespace std;

int main() {
    ifstream file("words.txt");
    string str;
    int num = 0;

    int k;
    int l;
    int z;

    string C;

    cin >> C;

    while (file >> str) {
        for (int i = 0; i < str.length(); i++) {
            str[i] = toupper(str[i]);
            cout << str << endl;
            /* k = str.find(',');

             if (k >= 0 && k <= str.length()) {
                 str.erase(k);
             }
             z = str.find('.');

             if (z >= 0 && z <= str.length()) {
                 str.erase(k);
             }
             l = str.find('?');

             if (l >= 0 && l <= str.length()) {
                 str.erase(k);
             }


             for (int j = 0; j < C.length(); j++) {
                 C[j] = toupper(C[j]);
             }
         }
         if (str == C){
             num++;
         }
     */
        }
        file.close();
        cout << num << endl;
        return 0;
    }
}
