import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class norepeat {
             public static void main(String[] args) {
            	 Scanner sc =new Scanner(System.in);
            			String s1=sc.nextLine();
            			
            			        List<String> list = Arrays.asList(s1.split(""));
            			 
            			        Set<String> uniqueWords = new TreeSet<String>(list);
            			        for (String word : uniqueWords) {
            			            System.out.println(word + ": " + Collections.frequency(list, word));
            			           
            			        }
            			    }
            			
            			
            	
            	 
            	
            	 }


