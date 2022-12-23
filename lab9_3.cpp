#include <iostream>
#include <cmath>
#include <string>


using namespace std;

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/


int main(){
double height,bounty,age;
cout<<"Enter your age: ";
cin>>age;
string character; 


if(age<=25){
    cout<<"Enter your height: ";
    cin>>height;

    if(height<100){
    character = "Chopper";
}
    else if(height<180){
    character = "Usopp";
}   
    else{
    cout<<"Enter your bounty: ";
    cin>>bounty;
    if(bounty<=1100000000)
    {
     character = "Sanji";
    }else{
     character = "Zoro";
}
}
}
    