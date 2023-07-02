struct max_result{
    int max;
    int pos;
};

struct max_result max(int *arr, int size){
    int max = 0;

    struct max_result mr;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
            mr.max = max;
            mr.pos = i;
        }
    }
    return  mr;
}
