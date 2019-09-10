#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted
    v = {6,1,3,2,1};
    /* your code here */


    // print the unsorted v
    for (int i = 0; i < v.size(); i++){
        cout << v.at(i);
    }
    cout << endl;


    // sort v
    maxSort(v);


    // print the sorted v
    for (int i = 0; i < v.size(); i++){
        cout << v.at(i);
    }
    cout << endl;


    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        int currMax = 0;

        for(int j=0;j<=i;j++){
            /*complete the code*/
            if (list.at(j) > list.at(currMax)){
                currMax = j;
            }

        }
        swap(list.at(currMax), list.at(i));
        print(list);
    }
}

// swap function
void swap(int& a, int& b){
    int tempVal = a;
    a = b;
    b = tempVal;

}

// print function
void print(const vector<int>& list){
    for (int i = 0; i < list.size(); i++){
        cout << list.at(i);
    }
    cout << endl;
}

