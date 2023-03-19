#include<iostream>
#include <stack>
#include<queue>
#include<string>
using namespace std;
int main() {
queue<char> q;
stack <char> s;
string name;
int count = 0;
cout << "Please enter a name " << endl;
cin >> name;
for (int i = 0; i < name.size(); i++) {
    q.push(name[i]);
    s.push(name[i]);
}
bool check = true;
if (!q.empty() && !s.empty() && check){
    if (s.top() == q.front()) {
        q.pop();
        s.pop();
        cout << " It is a palindrome " << endl;
    }
    else
        cout << " It's not a palindrome" << endl;

    }


return 0;


}
