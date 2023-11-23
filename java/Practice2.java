//program for bit manipulation 
class Practice2{
    public static void main(String[]args){
        int a=3;
        int pos = 2;
        int not = ~(1<<pos);
        int ans = not&a;
        System.out.println(ans);
    }
}