import java.util.Scanner;

public class Main2490 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		for(int i = 0 ; i < 3 ; i++) {
			int 등의개수 = 0;
			for(int j = 0 ; j < 4 ; j++) {
				등의개수 += sc.nextInt();
			}
			System.out.println((char) ('A' + ((8 - 등의개수) % 5)));
		}
	}
}