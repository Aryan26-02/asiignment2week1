#include<iostream>
using namespace std;
int main (){
    float pi = 3.1415;
    float radius , height;
    cout<<"Enter the value of radius : \n";
    cin>>radius;
    cout<<"Enter the value of height : \n";
    cin>>height;
    float volume = pi*radius*radius*height;
    cout<<"The volume of cylinder is :"<<volume;
    
}