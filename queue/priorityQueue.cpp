#include<iostream>
#include<queue>

using namespace std ;  //PQ arranges the largest elememt at the top

void explainPQ(){
  priority_queue<int> pq ;
  pq.push(5) ;
  pq.push(3) ;
  pq.push(8) ;
  pq.emplace(10) ;

  cout<<pq.top()<<endl ; //prints 10 
  pq.pop() ;
  cout<<pq.top()<<endl ;

  //MINIMUM HEAP
  priority_queue<int, vector<int>, greater<int>>pq ;
  pq.push(4) ;
  pq.push(5) ;
  pq.push(10) ;
  pq.push(1) ;

  cout<<pq.top()<<endl ; //prints 1
}

int main(){
  explainPQ() ;
}