import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class boj_10972 {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int num;
    static int[] p;

    public static void main(String[] args) throws IOException {
        num = Integer.parseInt(br.readLine()); // 첫 줄 읽음
        p = new int[num]; // 입력한 순열 넣기 위한 배열 선언

        StringTokenizer st = new StringTokenizer(br.readLine(), " "); // 입력한 순열 공백 단위로 끊어서 접근하도록 함
       
        for(int i = 0; i<num; i++) { // 두번째 줄 읽음
        p[i] = Integer.parseInt(st.nextToken()); // 공백으로 끊어놓은 st 하나씩 읽어서 저장함
       }

       if(nextPermutation()) {
        for(int i = 0; i<num; i++) {
            System.out.print(p[i] + " ");
        }
       } else {
        System.out.print("-1");
       }

       br.close();
    }

    public static boolean nextPermutation() {
        // 뒤에서부터 p[i-1] < p[i] 인 i를 찾음
        int i = p.length-1; // 마지막 인덱스
        // 조건 만족 안 할 때 = p[i-1] < p[i] 인 가장 큰 i
        while(i > 0 && p[i-1] >= p[i]) i--;
     
        if(i <= 0)  return false;

        // 다시 뒤에서부터 p[j] > p[i-1] 인 j를 찾음
        int j = p.length-1;
        while(j>=i && p[j] <= p[i-1]) j--;
        // 조건 만족 안 할 때 = p[j] > p[i-1] 인 가장 큰 j
        
        // swap
        swap(i-1, j);

        // 오름차순 정렬
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
