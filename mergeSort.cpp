#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr, int first, int mid, int last) {
    int n1 = mid - first + 1;
    int n2 = last - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++) {
        left[i] = arr[first + i];
    }

    for (int j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = first;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < n1) {
        arr[k++] = left[i++];
    }

    while (j < n2) {
        arr[k++] = right[j++];
    }
}

void mergeSort(vector<int> &arr, int first, int last) {
    if (first < last) {
        int mid = first + (last - first) / 2;

        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);

        merge(arr, first, mid, last);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> array(n);
    
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    mergeSort(array, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << array[i] << "\t";
    }

    return 0;
}
