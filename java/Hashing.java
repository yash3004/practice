import java.util.*;
class Hashing{


	public static void main(String args[]){
		HashSet<Integer> set= new HashSet<>();
		Scanner sc = new Scanner(System.in);
		for(int i = 0 ;i<5;i++){
			set.add(i);
		}
		System.out.println(set);
		Iterator it = set.iterator();
		while(it.hasNext()){
			System.out.println(it.next());
		}
}
}