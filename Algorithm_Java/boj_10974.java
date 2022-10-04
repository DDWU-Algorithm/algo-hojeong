import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class boj_10974 {

	private static int N;
	private static int p[];
	private static boolean visited[];
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		N = Integer.parseInt(br.readLine());
		p = new int[N];
		visited = new boolean[N];
		
		permutation(0);
	}
	
	private static void permutation(int depth) {
		if(depth == N) {
			for(int i=0;i<N;i++)
				System.out.print(p[i]+" ");
			System.out.println();
			return ;
		}
		
		for(int i=0;i<N;i++) {
			if(visited[i])
				continue;
			p[depth] = i+1;
			visited[i] = true;
			permutation(depth + 1);
			visited[i] = false;
		}
	}

}