import java.util.HashMap;
import java.util.HashSet;

public class fat1 {
    boolean isValid(String s, int maxletter){
    public static long wonderfulstring(String s){
        long[] maskF = new long[1 << 10];
        maskF[0] = 1;
        long ans = 0;
        int i = 0, n = s.length(), mask = 0;
        while (i < n) {
            mask ^= 1 << (9 - (s.charAt(i++) - 'a'));
            ans += maskF[mask]++;
            for (int j = 0; j < 10; j++) {
                ans += maskF[mask ^ (1 << j)];
            }
        }
        return ans;
    }
    }
    public int maxfreq(String s, int maxletter, int mins, int maxs){
        if(s == null || s.length() == 0|| maxletter == 0){
            return 0;
        }
        HashMap<String, Integer> hm = new HashMap<>();
        int max = 0;
        for(int i=0;i<s.length() - mins +1;i++){
            String cur = s.substring(i, i+mins);
        if(isValid(cur, maxletter)){
            hm.put(cur, hm.getOrDefault(cur,0) +1);
            max = Math.max(max , hm.get(cur));
        }
    }
    return max;
    }
    boolean isValid(String cur, int maxletter){
        HashSet<Character> hs = new HashSet<>();
        for(char c: cur.toCharArray()) hs.add(c);
        return hs.size() <= maxletter;
    }
    public static void main(String args[]){
        System.out.println("The words are "+ wonderfulstring("staaars"));
    }
}
