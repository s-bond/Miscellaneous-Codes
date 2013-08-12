//siddharth maloo
//big integer practice
import java.util.*;
import java.math.*;
public class Main{
	public static void main(String[] argv){
		BigInteger num, k, two, x, y;
		int t;
		String s1, s2;
		Scanner in = new Scanner(System.in);
		t = 10;
		while(t>0){
			s1 = in.next();
			s2 = in.next();			
			num = new BigInteger(s1);
			k 	= new BigInteger(s2);
			two = new BigInteger("2");
			x 	= num.add(k);
			x	= x.divide(two);
			System.out.println(x);
			y	= num.subtract(k);
			y	= y.divide(two);
			System.out.println(y);
			t--;
			}		
		}
	}