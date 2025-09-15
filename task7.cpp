#include <iostream>
#include <vector>
using namespace std;

int main() {
    int array[0];
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
        for(int i = 0; i < 5; i++){
        // if key is found then it will store the index in the vector
            if(array[i] == key){
            indices.push_back(i);
        }
    }
    // if the vector is empty after the above loop then it will print "Key not found"
    if(indices.empty()){
        cout << "Key not found" << endl;
    } 
    else { // if the vector is not empty then it will print the indices of the key
        cout << "Key found at indices: ";
        for(int i = 0; i < indices.size(); i++){
            cout << indices[i] << " ";
        }
        cout << endl;
    }
}
    return 0;
}