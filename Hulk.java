import java.util.*;
public class Hulk
{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		for(int i = 1 ; i < a ; i++){
			if(i%2!=0){
				System.out.print("I hate that ");
			}
			if(i%2==0){
				System.out.print("I love that ");
			}
		}
		if(a%2!=0){
			System.out.print("I hate it ");
		}
		if(a%2==0){
			System.out.print("I love it ");
		}
	}
}