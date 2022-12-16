// ConsoleApplication69.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int gr = 1;
    int cnt = 0;
    int LastIndex=0;
    string s;
    getline(cin, s);
    int n = size(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            cnt += 1;
           
        }
        if (cnt != 2) {
            continue;
        }
        if (cnt == 2 and (s[i] == '.' or s[i] == ',' or s[i] == '!' or s[i] == ':' or s[i] == '"' or s[i] == '{' or s[i] == ';' or s[i] == '}' or s[i] == '(' or s[i] == ')') and (s[i + 1] == '.' or s[i + 1] == ',' or s[i + 1] == '!' or s[i + 1] == ':' or s[i + 1] == '"' or s[i + 1] == '{' or s[i + 1] == ';' or s[i + 1] == '}' or s[i + 1] == '(' or s[i + 1] == ')')) {
            gr += 1;
            LastIndex = i;
        }
        
    }
    int l = gr + 1;
    cnt = cnt - cnt+1;
    for (int i = LastIndex+1; i >0; i--) {
        if (cnt > l) {
            continue;
        }
        s[i] = '0';
        cnt += 1;
    }
  
    cout << s;
    //123*,,,,123*.,.,.,24234623786*.,.,.,.,.,.,
    
    //huihfjwbkj*.,.,.,.,.,.,.,.321039uihjw32*.,.,.,.,.,,,,,,*231232983438123127398123981983798123981893198*/.,/.,/.,
}

