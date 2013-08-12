//siddharth maloo
//big integer practice
import java.util.*;
import java.math.*;
public class Main{
	public static void main(String[] argv){
		BigInteger num, k, x, ONE;
		int t;
		String s1;
		ONE = new BigInteger("1");
		Scanner in = new Scanner(System.in);
		t =	in.nextInt();
		while(t>0){
			s1 = in.next();
			num = new BigInteger(s1);
			k 	= new BigInteger("1");
			x	= new BigInteger("1");
			num = num.add(ONE);
			while ( ! k.equals(num) ){
				x = x.multiply(k);
				k = k.add(ONE);
			}
			System.out.println(x);
			t--;
			}		
		}
	}