import java.util.*;
public class IsYourhorseshoeontheotherhoof
{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int n = 4;
		long a[] = new long  [4];
		int c = 0;
		for(int i = 0 ; i < n ; i++){
			a[i] = sc.nextInt();
		}
		Arrays.sort(a);
		for(int i = 0 ; i < n-1 ; i++){
			if(a[i]==a[i+1]){
				c+=1;
			}
		}
		System.out.println(c);
		
	}
}