#include <iostream>
using namespace std;
int main (){
    int index,s;
    
    cout<<"Enter The Size Of An Array : ";
    cin>>s;
    
    long long int enro[s];

    cout<<"Enter The Students Enrollment Numbers : ";

    for(int i=0;i<s;i++){
        cin>>enro[i];
    }

cout<<"Your Entered Array : ";
    for(int i=0;i<s;i++){
        cout<<enro[i]<<" ";
    }

    cout<<" "<<endl;

    cout<<"Enter The Index For Deletion : ";
    cin>>index;

    for(int i = index; i<s-1 ; i++){
        enro[i] = enro[i+1];
    }

  s--;
cout<<"Your New Array :";
    for(int i=0 ; i<s ; i++){
        cout<<enro[i]<<" ";
    }
}