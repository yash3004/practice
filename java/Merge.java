public class Merge{
    public static void merge(int arr[] , int s , int e){
        int mid = (s+e)/2;
        int len1 = mid-s+1;
        int len2 = e-mid;
        int left[] = new int[len1];
        int right[] = new int[len2];
        int k = s;
        for(int i=0;i<len1;i++){
            left[i]=arr[k++];

        }
        k=mid+1;
        for(int i=0;i<len2;i++){
            right[i] = arr[k++];
        }
        //checking and sorting 
        int l=0;
        int r=0;
        k = s;
        while(l<len1  && r<len2){
            if(left[l] < right[r]){
                arr[k++] = left[l++];
            
            }
            else{
                arr[k++] = right[r++];
            }
        }
        //handeling the remaining constraints so that they doesnt go out of bound
        while(l<len1){
            arr[k++] = left[l++];
        }
        while(r<len2){
            arr[k++] = right[r++];
        }

        //freeing the memory at each iteration 
        

    }
    public static void mergeSort(int arr[] , int s , int e){
        //base funtion 
        if(s>=e){
            return;
        }
        int mid = (s+e)/2;
        mergeSort(arr , s , mid);
        mergeSort(arr,mid+1, e);
        merge(arr , s , e);
    }
    public static void print_arr(int arr[]){
        for(int i:arr){
            System.out.print(i+ " ");
        }
        System.out.println();
    }
    public static void main(String [] args){
        int arr[] = {5,1,3,5,3,2,5,6,7,3,1,3,1,1,0,0,45,6,4,47474,7,4,47,74,74,1212,2,3,23,2,21,2,31,3,1,31,3,1,31,3,13,1,331,31,4,25,234,1,1,2,14,124,1,1,241,41,142,1,1,3,2,31,241,41,24,132,1,31,23,13,1,32,13,13,12,4,1,41,48,8,5,4,54,4,57,5,7684,67,54,23,52,6,4,754634,62,2,6,56,86,56788544,52,6,67,76,54,4,56,7,98,765,43,3,45,67,0,9,8765,432,44,34,5678,990,9,8765,432,4,45,6789,0,98,7654,};
        print_arr(arr);
        mergeSort(arr , 0 , arr.length -1);
        print_arr(arr);
    }
}