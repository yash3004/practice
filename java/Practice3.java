//program for multithreading in java 
class My_t1 extends Thread{
    @Override
    public void run(){
        int i=0;
        while(i <= 100){
            System.out.print(i*2);
            i++;
        }
         System.out.println("\n");
    }
}
class My_t2 extends Thread{
    @Override
    public void run(){
        int j =0;

        while(j<= 100){
            System.out.print(j*3);
            j++;
        }
         System.out.println("\n");
    }
}
class Practice3{
    public static void main(String[] args){
        My_t1 t1 = new My_t1();
        My_t2 t2 = new My_t2();
        System.out.println("Name of t1: "+ t1.getName());    
        System.out.println("Name of t2: "+t2.getName());  
        t1.start();
        t2.start();
    }

}