import java.util.*;
public class Power {

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n= 0;
        int p= 0;
        int pow = 0;

        System.out.print("Enter number: ");
        n= sc.nextInt();

        System.out.print("Enter power: ");
        p = sc.nextInt();

        System.out.print(pow(n,p));
    }
    public static int pow(int w, int q)
    {
            int p = 1;
            for(int a=0;c<q;c++)
            pow*=w;
            return pow;
        }

}
