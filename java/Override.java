//java anonyms class 
interface Demo{
	public void meth1();
}
class Demoano implements Demo{
	@Override
	public void meth1(){
		System.out.print("ab nhi hai \n");
	}
	public void meth2(){
		System.out.print("hello bsdk");
	}


	
}
class Pra{
	public static void main(String args[]){
		Demo obj = new Demoano();
		obj.meth1();

		Demo obj1 = () -> {
			System.out.println("hello baby");
		};
		obj1.meth1();


		Demoano obj2 = () ->{
			public void meth3(){
				System.out.println("hello guys");

			}
		};
		obj2.meth3();
		
	}
}
