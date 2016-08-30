import java.io.*;
class StringToInt{
public static void main(String args[]){
int intoInt;
String s1;
Scanner sc=new Scanner(System.in);
s1=sc.next();
intoInt=Integer.parseInt(s1);
System.out.println("This is an integer: "+intoInt);
}
}
