import java.util.Scanner;

public class findhcf 
{
  
	public static void main(String[] args) 
	{
		Scanner in=new Scanner(System.in);
		int i1=in.nextInt();
		int i2=in.nextInt();
		int d = 0;
		
		while(d>0)
		{
			d=i1%i2;
			i1=i2;
			i2=r;
		}
     
		System.out.println("GCD IS"+i1);
	}

}
