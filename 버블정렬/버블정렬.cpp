# include <iostream>
# include <vector>


void bub_sort(std::vector<int>& arr){
    int n = arr.size();
    for (int i=0; i<n-1; i++){
        for (int l=0; l<n-1-i; l++){
            if (arr[l] > arr[l+1]){ // 오름차순 정렬
                std::swap(arr[l], arr[l+1]);
            }
        }
    }
}

int main(){
    std::vector<int> arr = {5, 4, 3, 2, 1};

    std::cout << "정렬 전 : ";
    for (int num : arr){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 정렬
    bub_sort(arr);
    std::cout << "정렬 후 : ";
    for (int num : arr){
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}