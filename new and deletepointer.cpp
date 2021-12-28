#include<iostream>
using namespace std;


int main(){
	int a = 10 ;
	int *ptr = &a ;
	
	cout << "The Value Of A Is : " << *(ptr) << endl; 
	
	//new operator
	int  *p = new int(40);
	float  *q = new float(50.3);
    cout << "The Value at Address integer P is  : "<< *(p) << endl; 
    cout << "The Value at Address Float q is  : "  << *(q) << endl; 
    //dynamic allocation 
    int *arr = new int[3];
    arr[0] = 10;
   // arr[1] = 20;
    *(arr+1) =20; 
    arr[2] = 30;
  
    cout << "The Value at Address  Array [0] is  : " << arr[0] << endl; 
    cout << "The Value at Address  Array [1] is  : " << arr[1] << endl; 
    cout << "The Value at Address  Array [2] is  : " << arr[2] << endl; 
    
    //delete operator
    
}
