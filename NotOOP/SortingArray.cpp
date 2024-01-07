#include <iostream>

void bubblesort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            
        }
        
    }
}
int main(){

    //Bubble Sort
    int array[] = {5,3,9,4,10,6,7,2,1,8};
    int size = sizeof(array)/sizeof(array[0]);

    bubblesort(array, size);

    for(int element : array){
        std::cout << element << ' ';       
    }
    

    return 0;
}