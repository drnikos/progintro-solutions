#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int *leftArr = (int *) malloc(n1 * sizeof(int));
    int *rightArr = (int *) malloc(n2 * sizeof(int));
    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];
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
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
    free(leftArr);
    free(rightArr);
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int weights[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    int n, b;
    int maxweight = 0;
    cin >> n >> b;
    for (int i = 0; i < n; i++)
        cin >> weights[i];
    mergeSort(weights, 0, n - 1);

    int l = 0, r = n - 1;
    while (l <= r) {
        if (weights[r] + weights[l] > b) {
            r--;
            maxweight++;
        } else {
            l++;
            r--;
            maxweight++;
        }
    }
    cout << maxweight << endl;
}
