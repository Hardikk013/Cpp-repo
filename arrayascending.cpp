#include <iostream>
using namespace std;
int main(){

    int Percentage[] = {95, 91, 15, 88, 70};

    int size = sizeof(Percentage)/sizeof(Percentage[0]);

    for(int i = 0 ; i<size-1 ; i++){
        for(int j = 0 ; j<size-i-1 ; j++){
            if(Percentage[j]>Percentage[j+1]){
                int temp = Percentage[j];
                Percentage[j] = Percentage[j+1];
                Percentage[j+1] = temp;
            }
        }
    }

    for(int i = 0 ; i<size ; i++){
        cout<<Percentage[i]<<" ";
    }
}