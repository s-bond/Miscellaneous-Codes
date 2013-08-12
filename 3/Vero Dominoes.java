//n*(n+1)*(n+2) / 2
import java.util.*;
import java.math.*;
public class Main{
	public static void main(String[] argv){
		Scanner in = new Scanner(System.in);
		int t;
		String n;
		t = in.nextInt();
		BigInteger ONE = new BigInteger("1");
		BigInteger b = new BigInteger("2");
		while ( t > 0 ) {
			n = in.next();
			BigInteger a = new BigInteger(n);
			BigInteger c = new BigInteger(n);
			BigInteger d = new BigInteger(n);
			c = c.add(ONE);
			d = d.add(ONE);d = d.add(ONE);
			a = a.multiply(c);
			a = a.multiply(d);
			a = a.divide(b);
			System.out.println(a);
			t--;
			}
		}
	}