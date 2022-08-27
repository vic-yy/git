#include <bits/stdc++.h>

using namespace std;

int main(){
    string palavra;
    cin >> palavra;

    int length = palavra.length();
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    int index = 0;

    while (index < length){
    if (palavra[index] == 'a') 
            c1++;
            else if (palavra[index] == 'e')
            c2++;
            else if (palavra[index] == 'i')
            c3++;
            else if (palavra[index] == 'o')
            c4++;
            else if (palavra[index] == 'u')
            c5++;
            
            index = index + 1;
                }

    if (c1>0)
    cout << "a " << c1 << "\n";
    if (c2 >0)
    cout << "e " << c2 << "\n";
    if (c3 >0)
    cout << "i " << c3 << "\n";
    if (c4 >0)
    cout << "o " << c4 << "\n";
    if (c5>0)
    cout << "u " << c5 << "\n" << endl; 

    return 0;
}