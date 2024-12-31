#include <iostream>
using namespace std;
int list[100000];

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int *leftArr = (int *) malloc(n1 * sizeof(int));
    int *rightArr = (int *) malloc(n2 * sizeof(int));

    // Copy data to temporary arrays
    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    // Free the dynamically allocated memory
    free(leftArr);
    free(rightArr);
}

// The subarray to be sorted is in the index range [left..right]
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Calculate the midpoint
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    int n, x;
    int res = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> list[i];
    mergeSort(list, 0, n - 1);
    int left = 0, right = n - 1;
    while (left < right) {
        if (list[right] + list[left] > x)
            right--;
        else if (list[left] + list[right] < x)
            left++;
        else {
            res++;
            left++;
        }
    }
    cout << res << endl;
}
