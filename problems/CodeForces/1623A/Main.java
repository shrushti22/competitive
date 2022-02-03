import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {

	public static void main(String[] args) {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		final int cases;
		try {
			cases = Integer.parseInt(br.readLine().trim());
			Solver solver = new Solver();
			for (int i = 0; i < cases; i++) {	
                String[] strNums = br.readLine().split(" ");
                int r = Integer.parseInt(strNums[0]), c = Integer.parseInt(strNums[1]), rb = Integer.parseInt(strNums[2]), cb = Integer.parseInt(strNums[3]), rd = Integer.parseInt(strNums[4]), cd = Integer.parseInt(strNums[5]);		
				solver.solve(r, c, rb, cb, rd, cd);
			}

		} catch (IOException e) {
			e.printStackTrace();
		}
	}

}

class Solver {

	public void solve(int r, int c, int rb, int cb, int rd, int cd) {					
		int rowSteps =0, colSteps=0;
        if(rb<=rd){
            rowSteps = rd-rb;
        }else{
            rowSteps = (2*r) - rd- rb;
        }
        
        if(cb<=cd){
            colSteps = cd-cb;
        }else{
            colSteps = (2*c)-cb-cd;
        }
		System.out.println(Integer.toString(Math.min(rowSteps, colSteps)));
	}

}