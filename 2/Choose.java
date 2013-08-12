import java.util.*;
import java.math.*;
public class Choose{
		int num, o_num;
        BigInteger ONE = new BigInteger("1");
		BigInteger sum = new BigInteger("0");	    
    public void sel(int n,int k) {
	BigInteger r  = new BigInteger ("1");
	BigInteger nn = new BigInteger ("0");
	BigInteger kk = new BigInteger ("0");
	BigInteger dd = new BigInteger ("1");
	nn = nn.valueOf(n);
	kk = kk.valueOf(k);
	kk = kk.add(ONE);
	while ( ! dd.equals(kk) ) {
		r = r.multiply(nn);
		nn = nn.subtract(ONE);
		r = r.divide(dd);
		dd = dd.add(ONE);
    }
	sum = sum.add(r);
}
	public void getdata(){
	Scanner in = new Scanner(System.in);
	o_num = in.nextInt();
	num = o_num;
	}
	public void solve(){
		if   (num%2 == 0 ) {num/=2;}
		else {num=(num/2) + 1;}
		sum = sum.add(ONE);
		int i;
		for(i=1;i<=num;i++){sel(o_num-i+1,i);}
		System.out.println(sum);
		}
	public static void main(String[] argv){		
	Choose sid = new Choose ();
		sid.getdata();
		sid.solve();		
		}
	}