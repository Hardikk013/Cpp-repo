#include <iostream>
using namespace std;
int main(){
    string Language[] = {"C","C++","JAVA","Data Structure","Python"};

    int size = sizeof(Language);

   for(int i = 0; i <= size; i++) {
    cout << "Element at index " << i << " : " << Language[i] << "\n";
}

}