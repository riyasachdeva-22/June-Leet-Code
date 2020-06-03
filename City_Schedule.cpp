//city scheduling
class Solution {
    public int twoCitySchedCost(int[][] costs) {
        Arrays.sort(costs,Comparator.comparingInt(cost->(cost[0]-cost[1])));
		int minC=0;
		for(int i=0;i<costs.length;i++){
			minC+=costs[i][i<costs.length/2?0:1];
		}
		return minC;
    }
}
