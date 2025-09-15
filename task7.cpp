#include <iostream>
#include <vector>
using namespace std;

//create function
void searchKey(int arr[], int size, int key) {
    vector<int> indices;
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            indices.push_back(i);
        }
    }
    if(indices.empty()) {
        cout << "Key not found" << endl;
    } else {
        cout << "Key found at indices: ";
        for(int index : indices) {
            cout << index << " ";
        }
        cout << endl;
    }
}
int main() {
    int array[] = {1, 3, 5, 3, 2};
    vector<int> indices;
    int key;

    cout << "Enter the key to search: ";
    cin >> key;

    //if array is empty then it will print "Array is empty"
    if(sizeof(array) == 0){
        cout << "Array is empty" << endl;
    }
    // if array is not empty then it will search for the key in the array
    else if(sizeof(array) > 0)
    {
        searchKey(array, sizeof(array)/sizeof(array[0]), key);  
    }
    return 0;
}