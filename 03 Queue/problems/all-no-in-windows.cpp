#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void display(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int k = 3;
    queue<int> q;

    // Push first window
    for (int i = 0; i < k; i++) {
        q.push(arr[i]);
    }
    display(q);

    // Slide the window
    for (int i = k; i < n; i++) {
        q.pop();          // remove first element
        q.push(arr[i]);   // add new element
        display(q);       // print current window
    }

    return 0;
}
