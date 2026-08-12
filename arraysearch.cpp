#include <iostream>
using namespace std;
int main (){
    int n;

    cout<<"Enter The Size Of An Array : ";
    cin>>n;

    int arr[n];

    cout<<"Size Of Array Is : "<<n<<endl;

    cout<<"Enter The Value Of Your Array : ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Your Array Is : ";

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<" "<<endl;

    int search;
    cout<<"Enter Your Element For Searching : ";
    cin>>search;
    bool found = false;

    for(int i=0 ; i<n ; i++){
        if(arr[i] == search){
            cout<<"Search is Successful!"<<endl;
            cout<<"Element "<<search<<" Found At Index "<<i;
            found = true;
            break;
        }
    }  
    if(found == false){
        cout<<"Search Is Unsuccessful!"<<endl;
        cout<<"Element Not Found ";
    }
    
}