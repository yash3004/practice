import java.util.*;
public class Pattern{
	public static void pyramid(int n){
	for(int i = 1;i<=n;i++){
	for(int j = 1;j<=i;j++){
	System.out.print("*");

	}
	System.out.println();
	}

	}
	public static void pattern2(int n){
		for(int i=n;i>=1;i--){
			for(int j = 1;j<=i;j++){
				System.out.print("*");
			}
			System.out.print("\n");
		}
	}
	public static void pat3(int n){
		for(int i=0;i<=n;i++){
			for(int j = 1;j<=n-i;j++){
				System.out.print(" ");
			}
			for(int k = 0;k<=i;k++){
				System.out.print("*");
			}
			System.out.println();
		}

	}
	public static void pat4(int n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				System.out.print( j + " ");
			}
			System.out.println();
		}

		
	}
	public static void pat5(int n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				if((i+j) % 2 == 0){
					System.out.print("1");
				}
				else {
					System.out.print("0");
				}
			}
			System.out.println();
		}
	}
	public static void butterfly(int n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				System.out.print("*");
			}
			int s = 2*(n-i);
			for(int k = 1;k<=s;k++){
				System.out.print(" ");
			}
			for(int l = 1;l<=i;l++){
				System.out.print("*");
			}
			System.out.print("\n");
		}
		 
		for(int s= n;s>=1;s--){
				for(int j=1;j<=s;j++){
				System.out.print("*");
			}
			int s2 = 2*(n-s);
			for(int k = 1;k<=s2;k++){
				System.out.print(" ");
			}
			for(int l = 1;l<=s;l++){
				System.out.print("*");
			}
			System.out.print("\n");

		}
	}
	public static void pattern4(int n ){
		for(int i =1;i<=n;i++){
			for(int k = 1;k<=n-i;k++){
				System.out.print(" ");

			}
			for(int h = 1;h<=n;h++){
				System.out.print("*");
			}
			System.out.print("\n");
		}
	}

	 
	public static void main(String args[]){
	int n = Integer.parseInt(args[0]);
	butterfly(n);
	pattern4(n);

	
	
	}
	
}
