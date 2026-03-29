#include <iostream>
using namespace std;
void bubblesort(int array[], int size);
int main(){
    int array[] = {4,7,8,3,9,2,5,0,1,6};
    int size = sizeof(array)/sizeof(array[1]);
    for (int element: array){
        cout << element << '\t';
    }
    cout << endl;
    bubblesort(array, size);
    for (int element: array){
        cout << element << '\t';
    }
    return 0;
}
void bubblesort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1 ; i++ ){
        for(int j = 0 ; j < size -1 -i; j++){
            if(array[j]> array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}