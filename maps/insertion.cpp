#include<iostream>
#include<map>
using namespace std ;

int main(){
  map<string, int> myMap ;
  myMap["apple"] = 10 ;
  myMap["banana"] = 20 ;
  myMap["apple"] = 30 ; //updates the value of apple to 30

  return 0 ;
}