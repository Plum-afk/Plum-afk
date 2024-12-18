#include <stdio.h>

void bubbleSort(int *array, int size){
    
    for(int i = 0; i < size; i++){
        
        for(int j = i + 1; j < size; j++){
            
            if(array[i] > array[j]){
                
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                
            }
            
        }
        
    }
    
    printf("Array sorted. Here is the sorted array:\n");
    
    for(int i = 0; i < size; i++){
        
        printf("%d ", array[i]);
        
    }
    
}

void checkifSorted(int *arr, int size){
    
    int i;
    
    for(i = 0; arr[i] < arr[i + 1] && i < size - 1; i++){
        
    }
    
    if(i == size - 1){
        
        printf("Array is sorted.\n");
        
    } else {
        
        printf("Array is not sorted, sorting array...\n");
        
        bubbleSort(arr, size);
        
    }
    
}

int binarySearch(int *arr, int size, int target){
    
    int low = 0, high = size - 1;
    
    while(low <= high){
        
        int mid = (low + high) / 2;
        
        if(arr[mid] == target){
            
            return mid;
            
        }
        
        if(target < arr[mid]){
            
            high = mid - 1;
            
        } else {
            
            low = mid + 1;
            
        }
        
    }
    
    return -1;
    
}

int main(){
    
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter the elements of the array: ");
    
    for(int i = 0; i < size; i++){
        
        scanf("%d", &array[i]);
        
    }
    
    checkifSorted(array, size);
    
    int target;
    
    printf("\nEnter the value you want to search for: ");
    scanf("%d", &target);
    
    int result = binarySearch(array, size, target);
    
    (result == -1) ? printf("Not Found!") : printf("Found the target at index %d", result);
    
    return 0;
    
}
