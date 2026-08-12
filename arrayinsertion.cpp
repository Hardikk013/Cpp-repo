#include <iostream>
using namespace std;
int main () {
    int s,index,value;

    cout<<"Enter The Size Of An Array : ";
    cin>>s;

    long long enro[s];

    cout<<"Enter Your Array Elements : ";

    for(int i=0 ; i<s ; i++){
        cin>>enro[i];
    }

    for(int i=0 ; i<s ; i++){
        cout<<enro[i]<<" ";
    }

    cout<<" "<<endl;

    cout<<"Enter The Insertion Index : ";
    cin>>index;

    cout<<"Enter New Value : ";
    cin>>value;

    for(int i=s ; i>index ; i--){
        enro[i] = enro[i-1];
    }

    enro[index] = value;

    for(int i=0 ; i<s ; i++){
        cout<<enro[i]<<" ";
    }
}
