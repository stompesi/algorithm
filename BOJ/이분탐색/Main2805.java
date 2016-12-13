import java.util.Scanner;

public class Main2805 {
	
	static long getLength(long[] trees, int n, long mid) {
		long length = 0;
		for(int i = 0 ; i < n ; i++) {
			length += trees[i] - mid >= 0 ? trees[i] - mid : 0;
		}
		return length;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		long m = sc.nextLong();
		long[] trees = new long[n];
		
		long start = 0;
		long end = 0;
		long result = 0;
		
		for(int i = 0 ; i < n ; i ++) {
			trees[i] = sc.nextInt();
			end = Math.max(end, trees[i]);
		}
		
		while(start <= end) {
			long mid = (start + end) / 2;
			long length = getLength(trees, n, mid);
			
			if(length > m) {
				result = Math.max(result, mid);
				start = mid + 1;
			} else if(length == m) {
				result = mid;
				break;
			} else {
				end = mid - 1;
			}
		}
		System.out.println(result);
	}
}