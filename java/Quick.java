import java.util.*;
public class Quick{
     public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    

    public static int part(int [] arr , int s , int e){
        int pivot = arr[s];
        int count = 0;
        for(int i=s+1;i<=e;i++){
            if(arr[i] <= pivot){
                count++;
            }
        }
        int pivot_index = s+count;
        //swaping the pivot index with s+count
        swap(arr , pivot_index , s);
        int i = s;
        int j = e;
        while(i < pivot_index && j > pivot_index){
            
                while(arr[i] < pivot){
                    i++;
                }
                while(arr[j] > pivot){
                    j--;
                }
                if(i<pivot_index && j>pivot_index){
                    swap(arr, i++ , j--);
                }


            }
            return pivot_index;
        }

        
    
    public static void QuickSort(int arr[] , int s , int e){
        if(s>=e){
            return;
        }
        //partition
        int p=part(arr , s , e);
        //left sort
        QuickSort(arr , s ,p-1);
        //right sort
        QuickSort(arr,p+1,e);

    }
    public static void print_arr(int arr[]){
        for(int i:arr){
            System.out.print(i+ " ");
        }
        System.out.println();
    }
    public static void main(String args[]){
        int arr[] = {3,6,7,1,4,2,5,4};
        print_arr(arr);
        
        QuickSort(arr , 0 , 6);
        print_arr(arr);

    }
}