#include<iostream>
#include<stack>

using namespace std ;

void explainStack(){
  stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.emplace(5) ;

    cout<<s.size()<<endl ;
    cout<<s.empty()<<endl ; //true or false

    cout << "Stack top: " << s.top() << endl; // Should print 3

    s.pop();
    cout << "Stack top after pop: " << s.top() << endl; //must print 2
};


int main(){
  explainStack() ;
}