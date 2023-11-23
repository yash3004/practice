class Pen{
	String color;
	String type;

	public void write(){
	System.out.println("write something with the pen");
	}

	public void color(){
	System.out.println(this.color);
	}
}

class Pattern{
	public static void pt1(int n){
		for(int i=0;i<=n;i++){
			for(int j=0;j<=i;j++){
				System.out.print("*");
			}
			System.out.println();
		}

	}
}
public class OOPS{
	public static void main(String args[]){
	Pen pen1 = new Pen();
	pen1.color = "red";
	pen1.type = "ball";

	pen1.color();

	Pattern pat1 = new Pattern();
	pat1.pt1(5);

	}
}