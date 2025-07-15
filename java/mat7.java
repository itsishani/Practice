class OddSumSubarrays {
    public static int countSubarraysWithOddSum(int[] arr) {
        int oddPrefixSum = 0;
        int evenPrefixSum = 0;
        int count = 0;
        int MOD = 1000000007;

        int prefixSum = 0;
        for (int num : arr) {
            prefixSum += num;
            if (prefixSum % 2 == 0) {
                count = (count + oddPrefixSum + 1) % MOD;
                evenPrefixSum++;
            } else {
                count = (count + evenPrefixSum) % MOD;
                oddPrefixSum++;
            }
        }

        return count;
    }
}
public class mat7 {
    public static void main(String[] args) {
        int[] arr = {1, 3, 5};
        OddSumSubarrays s = new OddSumSubarrays();
        int result = s.countSubarraysWithOddSum(arr);
        System.out.println("Number of subarrays with an odd sum: " + result);
    }
}

