#include <iostream>
using namespace std;
//2#union
union box{

double weight;
double heigt;


};
int main()
{

box b1;
b1.weight=20;
b1.heigt=30;
cout<<b1.heigt<< endl;
cout<< b1.heigt;
}
//#3 linked list
void insertNode(int value){
  
  
  }  

box b1;
b1.weight=20;
b1.heigt=30;
cout<<b1.heigt<< endl;
cout<< b1.heigt;
//stack implementation
#define size 5
int stack[size],top=-1;
void puch(int value);
int pop();
int main(){


}
void puch(int value){
if (top==size-1){
    cout<< "stack overflow"<<endl;

}
else{

    top++;
    stack[top]=value;

}

}
int pop(){
    if (top== -1){

        cout << "stack underflow";

    }
    else{
        return stack[top--];
    }
}
//queue 

