import java.util.*;

public class Recursion
{
	public static void butterfly(int n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==1||j==1||i==n||j==n){
					System.out.print("*");
				}
				else {
					System.out.print(" ");
				}
			}
			System.out.print("\n");
			
		}

	}
	public static int fibb(int i ,int j, int n  ){
		int sum = i+j;


		if(n==0){
			return sum; 
		}
		
		
		System.out.println(sum);
		sum = fibb(j , sum , n-1);
		
		


		return sum;
	}

	public static int pow(int x, int n){
		if(n == 0){
			return 1;
		}
		if(x ==0){
			return 0;
		}
		int powx = pow(x,n-1);
		int pow2 = x * powx;
		return pow2;
	}
	public static void main(String args[]){
		int n = Integer.parseInt(args[0]);
		//
		int a=fibb(0,1,5);
		System.out.println(a);
		int b = pow(2 , 5);
		System.out.println(b);
	}
	


}
