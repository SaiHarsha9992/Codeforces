import java.util.*;
public class DivisibilityProblem
{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int c = 0;
		while(t!=0){
			int a = sc.nextInt();
			int b = sc.nextInt();
			if(a%b==0) 
			{
				System.out.println(0);
			}
			else {
				int w=a%b;
	
				System.out.println(b-w);
				}			
				t--;
		}
	}
}