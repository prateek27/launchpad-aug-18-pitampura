
import java.util.Scanner;

public class AgeOfUltron {

	public static void main(String[] args) {

		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		int[] men = new int[n];
		int[] cost = new int[n];
		int[] soldier = new int[3];
		for (int i = 0; i < n; i++) {
			men[i] = scn.nextInt();
			cost[i] = scn.nextInt();
		}
		System.out.println(minCostPath(men, cost, 0, soldier, 0));
	}

	public static int minCostPath(int[] men, int[] cost, int si, int[] soldier, int mincost) {
		if (si == men.length) {
			return mincost;
		}

		int x = minCostPath(men, cost, si + 1, soldier, mincost + cost[si]);
		int temp = soldier[2];
		soldier[2] += men[si];
		int y = minCostPath(men, cost, si + 1, soldier, mincost + 2 * cost[si]);
		int z = Integer.MAX_VALUE;
		soldier[2] = temp;
		int t1 = soldier[0];
		int t2 = soldier[1];
		int t3 = soldier[2];
		int t4=men[si];
		if (soldier[0] + soldier[1] + soldier[2] >= men[si]) {
			for (int i = 0; i <3; i++) {
				if (men[si] > 0)
					men[si] -= soldier[i];
				else
					break;
				if (men[si] < 0) {
					soldier[i] = Math.abs(men[si]);
					men[si] = 0;
				} else {
					soldier[i] =0;
				}
			}
			soldier[0] = soldier[1];
			soldier[1] = soldier[2];
			soldier[2] = 0;	
			z = minCostPath(men, cost, si + 1, soldier, mincost);
			soldier[0] = t1;
			soldier[1] = t2;
			soldier[2] = t3;
			men[si]=t4;
		}
		return Math.min(x, Math.min(y, z));
	}

}
