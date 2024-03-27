//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//   /* string a, b;
//    getline(cin, a);
//    getline(cin, b);
//    for (int i = 0; i < b.size(); i++) {
//        for (int j = 0; j < a.size(); j++) {
//            if (b[i] == a[j])
//                a.erase(j, 1);
//        }
//    }
//    cout << a << endl;*/
//    /*string str = "-1245151567";
//    printf("%d", 0 % 2);*/
//
//}

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 0;
    int flag1 = 1, flag2 = 1;
    int len = str.size();
    if (str[0] == '-') {
        flag1 = 1.5;
        len--;
    }
    if (str[str.size() - 1] % 2 == 0)
        flag2 = 2;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] - '0' == 2)
            count++;
    }
    double res = count * 1.0 / len * flag1 * flag2 * 100;
    printf("%.2lf", res);
}