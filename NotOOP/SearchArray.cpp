#include <iostream>

int findArray(int array[], int size, int element){

    for (int i = 0; i < size ; i++)
    {
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
int main(){

    int nums[] = {1,4,5,2,6,8,3};
    int size = sizeof(nums)/sizeof(nums[0]);
    int index;
    int myNum;

    std::cout << "What is myNum: ";
    std::cin >> myNum;

    index = findArray(nums, size, myNum);

    if(index != -1){
        std::cout << "Your Number is " << nums[index] << " at index " << index;
    }else{
        std::cout << myNum << " Is not in the array";
    }

    return 0;
}