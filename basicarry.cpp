more basic array question 
#include<iostream>
 using namespace std;
 void update (int arr[], int n){
    cout << endl << " inside the junction " << endl;
    arr[0]=120;
    for(int i =0; i<3;i++){
    cout << arr[i] << " " ;
 }
 cout << endl;
 cout << " going back to main fuction " << endl;
 }
 int main () {
    int arr[3]={1,2,3};
    cout << " printing in main function " << endl;
    for(int i=0; i<3;i++){
        cout<<arr[i]<< " ";
    }
    cout << endl;
    return 0;
 }

___________________________________________________________________________________________________________________________
//QUESTIONN 2 



#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout << "print the array" << endl;
    for(int i =0; i<size; i++){
        cout<<arr[1]<<" ";
    }
    cout <<" printing done"<< endl;
}
int main (){
    int number[15];
    cout << "value at 14 index" << number[14] <<endl;
    int second[3]={3,5,11};
     cout<<" value at 2 index"<<second[2]<< endl;
    int third[15]={2,7};
    int n=15;
    int thirdsize=sizeof(third)/sizeof(int);
    cout<<"size of third is "<< endl;
    int fourth[10]={0};
    n=10;
    int fifth[10]={1};
  n=10;
  int fifthsize=sizeof(fifth)/sizeof(int);
  cout << " size of fifth is  " << fifthsize << endl;
  char ch [5]={'a','b','c','r','p'};
  cout << ch[3] << endl;
  cout << " printing the array" << endl;
  for(int i =0;i<5;i++){
    cout << ch[1] << " ";
  }
  cout << "pinting done" << endl;
  double firstdouble[5];
  float firstfloat[6];
  bool firstbool[9];
  cout <<endl << " everytrhing is fine " << endl;
  return 0; 
}
