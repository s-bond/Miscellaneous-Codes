//siddharth maloo
//big integer practice
import java.util.*;
import java.math.*;
public class Main{
	public static void main(String[] argv){
		BigInteger b1, b2;
		int n, m, t;		
		Scanner in = new Scanner(System.in);
		t = in.nextInt();
		while(t>0){
			n = in.nextInt();
			m = in.nextInt();
			n++;m++;
			b1 = new BigInteger("2");
			b2 = new BigInteger("2");
			b1 = b1.pow(n);
			b2 = b2.pow(m);
			System.out.println(b1.subtract(b2)+".00");
			t--;
			}		
		}
	}