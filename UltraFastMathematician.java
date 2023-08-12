import java.util.*;
public class UltraFastMathematician
{
	public static void main(String args[]){
		Scanner sc = new Scanner (System.in);
		String s1 = sc.nextLine();
		String s2 = sc.nextLine();
		String s = "";
		for(int i = 0 ; i < s1.length() ; i++){
				if(s1.charAt(i)=='1'&&s2.charAt(i)=='0'||s1.charAt(i)=='0'&&s2.charAt(i)=='1'){
					s += '1';
				}
				else if(s1.charAt(i)=='1'&&s2.charAt(i)=='1'||s1.charAt(i)=='0'&&s2.charAt(i)=='0'){
					s +='0';				
				}
		}
		System.out.println(s);
	}
}