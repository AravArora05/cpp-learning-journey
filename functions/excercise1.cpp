int find_max_element(int* arr, int size) {
    int max = arr[0];   
    int i = 0;

    while (i < size) {
        if (*arr > max) {
            max = *arr;
        }
        arr++;   
        i++;     
    }

    return max;
}
