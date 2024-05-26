#include<iostream>
using namespace std ;

void rev(int n , int count)
{
  if(n>=count)
  {
    cout<<n<<endl ;
    n-- ;
    rev(n,1) ;
  }
  else return ;
}

int main(){
  int n ;
  cout<<"enter a number"<<endl ;
  cin>>n ;

  rev(n,1) ;
}


//BACKTRACKING

void printNumbers(int n){
    if(n == 0){
        return;
    }
    printNumbers(n - 1); 
    cout << n << " "; 
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNumbers(n); 
    return 0;
}
