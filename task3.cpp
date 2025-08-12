#include <bits/stdc++.h>
using namespace std;

struct Task { string name; bool done; };
vector<Task> tasks;

void show() {
    if (tasks.empty()) { cout << "No tasks yet.\n"; return; }
    cout << "****** To-Do List ******"<<endl;
    for (int i = 0; i < tasks.size(); i++)
        cout << i << ") " << (tasks[i].done ? "[completed] " : "[ ] ") << tasks[i].name << endl;
    cout << " "<< endl;
}

int main() {
    int ch, idx; string s;
    while (true) {
        cout << "\n1.Add  2.View  3.Complete  4.Remove  5.Exit\nChoose: ";
        cin >> ch;
        if (ch == 1) { cin.ignore(); cout << "Task name: "; getline(cin, s); tasks.push_back({s, 0}); }
        else if (ch == 2) show();
        else if (ch == 3) { cout << "Task index: "; cin >> idx; if (idx >= 0 && idx < tasks.size()) tasks[idx].done = 1; }
        else if (ch == 4) { cout << "Task index: "; cin >> idx; if (idx >= 0 && idx < tasks.size()) tasks.erase(tasks.begin() + idx); }
        else break;
    }
}
