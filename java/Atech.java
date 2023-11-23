import java.util.*;
public class Atech
{
	public static void main(String[]args)
	{
		Scanner sc = new Scanner(System.in);
		int m,q,a;
		int n = sc.nextInt();
		for(int j = 0;j<n;j++)
		{
			q = 0;
			a = 0;



						
			m = sc.nextInt();
			for(int i = 0;i<=m;i++)
			{
				String c;
				c = sc.nextLine();
				if(c == "A")
				{	
					a++;

				}
				else if(c == "Q")
				{
					q++;
				}

			}
			System.out.println(q+ " " +  a);
			if(q > a)
			{
				System.out.println("No");
			}
			else
				{
					System.out.println("Yes");
				}

		}
	}
}