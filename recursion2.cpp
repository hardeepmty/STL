#include<iostream>
using namespace  std ;

void sum(int n, int total)
{
  if(n<1)
  {
    cout<<total ;
    return ;
  }
  else
  {
    //  total = total+n ;
    // n= n-1 ;
   
    sum(n-1,total+n);
  }
}

int main(){
  int n ;
  cout<<"Enter"<<endl ;
  cin>>n ;

  sum(n,0) ;
}

//USING FUNCTIONAL RECURSION-

int add(int n){
  if(n==0){
    return 0 ;
  }
  else{
    return n + add(n-1) ;
  }
}

int main(){
  int n ; 
  cin>>n ;
  cout<<add(n) ;
}

//REVERSE AN ARRAY USING RECURSION -

#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };

    printArray(arr, 6);
    reverseArray(arr, 0, 5);

    cout << "Reversed array is" << endl;

    printArray(arr, 6);

    return 0;
}

//Multiple Recursion Calls in fibonacci series

int f(int n){
  if(n<=1){
    return n ;
  }
  else{
    int last = f(n-1) ;
    int slast = f(n-2) ;
    return last+slast ;
  }
}

int main(){
  cout<<f(4) ;
}
