import java.util.Scanner;

public class Main2846 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		int prev = 0;
		int sum = 0;
		int current = sc.nextInt();
		int result = 0;
		
		for(int i = 1 ; i < n ; i++) {
			prev = current;
			current = sc.nextInt();
			
			if(current - prev > 0) {
				sum += current - prev; 
			} else {
				result = Math.max(result, sum);
				sum = 0;
			}
		}
		result = Math.max(result, sum);
		System.out.println(result);
	}
}