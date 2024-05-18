#include<iostream>
#include<queue>

using namespace std ;   //FIFO PRINCIPLE

void explainQueue(){
    queue<int>q ;
    q.push(1) ;
    q.push(2) ;
    q.emplace(4) ;

    q.back() += 5  ;  //add 4 i.e 4+5 = 9
    cout<<q.back() ;  //it will print 9

    cout<<q.front() ;

    q.pop() ;

    cout<<q.front() ;
} ;

int main(){
  explainQueue() ;
}