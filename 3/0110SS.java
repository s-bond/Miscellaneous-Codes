import java.util.*;
import java.math.*;
public class Main{
		int num, count=0;
        BigInteger ONE = new BigInteger("1");
		BigInteger sum = new BigInteger("0");	    
    public void sel(int n) {
	BigInteger a  = new BigInteger ("0");
	BigInteger b  = new BigInteger ("1");
	while ( count < n ){
		a = a.add(b);
		b = a.subtract(b);
		count++;
		}
	sum = sum.add(a);
}
	public void getdata(){
	Scanner in = new Scanner(System.in);
	num = in.nextInt();
	}
	public void solve(){
	if(num!=0) sel(num+2);
		System.out.println(sum);
		}
	public static void main(String[] argv){		
	Main sid = new Main ();
		sid.getdata();
		sid.solve();		
		}
	}