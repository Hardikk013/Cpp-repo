#include<iostream>
using namespace std;
int main(){

    int choice;
    float spgc;
    int push_element,pop_element,i;
    int top = 5;
    string arr[100] = {"Laptop","CPU","Computer","Mobile","Remote","Pen Drive"};
   
    cout<<"=======Stack Operation Menu======="<<endl;
    cout<<"1. Insert Item (PUSH)"<<endl;
    cout<<"2. Delete Item (POP)"<<endl;
    cout<<"3. Last Item (STATUS)"<<endl;
    cout<<"4. Display Items"<<endl;

    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"How much element you want to push : ";
            cin>>push_element;

            for(i=0;i<push_element;i++){
                top++;
                cout<<"Enter Your Element : ";
                cin>>arr[top];
            }

            for(i=0;i<top+1;i++){
                cout<<arr[i]<<" ";
            }

        break;
        
        case 2:
            cout<<"How much element you want to pop : ";
            cin>>pop_element;

            for(i=0;i<pop_element;i++){
                string value = arr[top];
                top--;

                cout<<"Your popped element : "<<value<<endl;
            }

        break;
        
        case 3:
            cout<<"\n\nNumber Of Item In Stack : ";
            cout<<top+1;
            
            spgc = ((100-(top+1)) *100 / 100 );
            cout<<"\nPercentage of free stack is : "<<spgc<<"%";
        break;
    
    case 4:
            cout<<"Printing all elemnts of stack........."<<endl;
            for(i=0;i<top+1;i++){
                cout<<arr[i]<<" ";
            }
            break;
    }
}