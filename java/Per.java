import java.util.Scanner;
public class Per{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		while(a!= 0)
		{
			int n = sc.nextInt();
			if(n%2 == 1)
			{
				for(int i = 1;i<=n/2;i++)
				{
					System.out.println(i+(n/2) + " " + i + " " );
				}
			}
			else
			{
				for(int i = 1;i<=n/2;i++)
				{
					System.out.println(i + " " + (n+1)/2+i + " ");
				}
			}


		}
	}
}
