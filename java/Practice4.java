// code for exception handelling 
import java.util.*;
import java.io.*;
class Excep_handel{
    public int div(int n  , int k ){
        int c = 0;

        
        try {
            c = n/k;
            
            
        }
        
        catch(Exception e){
            System.out.println(e);

        }
        return c;
        
    }
    public void write_f(){
        PrintWriter p1 ;
        try{
            p1 = new PrintWriter("hello.txt");
            p1.println("hello");
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
    public void nest_try(int [] arr){
        try{
            System.out.println(arr[0]);
            for(int i:arr){
                try{
                    System.out.println(5/i);

                }
                catch(Exception e){
                    continue;
                }
            }
            
            }
            catch(Exception e){
                System.out.println(e);
        }
    }
}
public class Practice4{
    public static void main(String args[]){
        Excep_handel e1 = new Excep_handel();
        int c = e1.div(50,1);
        System.out.println(c);
        e1.write_f();
        int arr[] = {1,0,0,2,1};
        e1.nest_try(arr);

        
    }
}