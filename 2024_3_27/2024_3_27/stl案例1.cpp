//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<deque>
//#include<string>
//#include<algorithm>
//#include<ctime>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int aveScore){
//		this->name = name;
//		this->aveScore = aveScore;
//	}
//	string name;
//	int aveScore;
//};
//
//void createPerson(vector<Person>& v) {
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++) {
//		string name = "选手";
//		name += nameSeed[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//}
//
////打分
//void setScore(vector<Person>& v) {
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		deque<int> d;
//		for (int i = 0; i < 10; i++) {
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//
//		//去除极值
//		d.pop_front();
//		d.pop_back();
//
//		//sum
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//			sum += *dit;
//		}
//
//		//ave
//		int ave = sum / d.size();
//		it->aveScore = ave;
//	}
//}
//
//void showInfo(const vector<Person>& v) {
//	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名 : " << (*it).name << "平均分" << (*it).aveScore << endl;
//	}
//}
//
//int main() {
//	vector<Person> v;
//	srand((unsigned int)time(NULL));
//	createPerson(v);
//	setScore(v);
//	showInfo(v);
//	string s;
//	
//	return 0;
//}