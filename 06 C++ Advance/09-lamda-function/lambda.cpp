#include<iostream>
using namespace std;



int main(){
  auto sum = [](int a, int b){
    return a+b;
  };
 cout<< sum(4,5)<<" ";
 
}


#include <iostream>
using namespace std;
class Student {
private:
    int marks;       // private
public:
    string name;     // public
    void setMarks(int m) {     // public function to set private value
        marks = m;
    }
    void showDetails() {       // public function to display
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Amit";      // allowed (public)
    // s1.marks = 90;      ❌ NOT allowed (private, compile error)

    s1.setMarks(90);       // allowed
    s1.showDetails();

    return 0;
}
