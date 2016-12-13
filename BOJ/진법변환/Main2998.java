import java.util.Scanner;

public class Main2998 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		StringBuilder sb = new StringBuilder();
		String line = sc.nextLine();
		
		int remainder = line.length() % 3;
		int portion = line.length() / 3;
		int index = 0;
		int number = 0;
		
		if(remainder != 0) {
			for(int i = 0 ; i < remainder ; i++) {
				number *= 2;
				number += line.charAt(index++) - '0';
			}
			sb.append(number);
		}
		
		for(int i = 0 ; i < portion ; i++) {
			number = 0;
			for(int j = 0 ; j < 3 ; j++) {
				number *= 2;
				number += line.charAt(index++) - '0';
			}
			sb.append(number);
		}
		
		System.out.println(sb);
	}
}