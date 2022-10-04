import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class boj_10973 {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int num;
    static int[] p;

    public static void main(String[] args) throws IOException {
        num = Integer.parseInt(br.readLine());
        p = new int[num];

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for(int i=0; i<num; i++) {
            p[i] = Integer.parseInt(st.nextToken());
        }

        if(prevPermutation()) {
            for(int i=0; i<num; i++) {
                System.out.print(p[i] + " ");
            }
        } else {
            System.out.print("-1");
        }
        br.close();
    }

    public static boolean prevPermutation() {
        int i = p.length-1;
        while(i > 0 && p[i-1] <= p[i]) i--;
        if(i <= 0) return false;

        int j = p.length-1;
        while(j>=i && p[j] >= p[i-1]) j--;

        swap(i-1, j);

        j = p.length-1;
        while(i < j) {
            swap(i, j);
            i++;
            j--;
        }
        return true;
    }

    public static void swap(int idx1, int idx2) {
        int temp = p[idx1];
        p[idx1] = p[idx2];
        p[idx2] = temp;
    }
}
