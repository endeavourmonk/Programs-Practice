/*  https://www.hackerrank.com/challenges/c-tutorial-class/problem
Sample Input :::::
15
john
carmack
10

Sample Output:::::
15
carmack, john
10

15,john,carmack,10
*/
#include <iostream>
#include <sstream>
using namespace std;

class Student{
  private:
    int age,standard;
    string first_name,last_name; 
  public:
    void set_age(int a);
    void set_standard(int st);
    void set_first_name(string f_name);
    void set_last_name(string l_name);
    int get_age();
    string get_last_name();
    string get_first_name();
    int get_standard();
    void to_string();
};
    void Student :: set_age(int a){
        age =a;
    }
    void Student :: set_standard(int st){
        standard=st;
    }
    void Student :: set_first_name(string f_name){
        first_name=f_name;
    }
    void Student :: set_last_name(string l_name){
        last_name=l_name;
    }
    int Student :: get_age(){
        return age;
    }
    string Student :: get_last_name(){
        return last_name;
    }
    string Student :: get_first_name(){
        return first_name;
    }
    int Student :: get_standard(){
        return standard;
    }
    void Student :: to_string(){
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
    }
//Driver code
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    return 0;
}