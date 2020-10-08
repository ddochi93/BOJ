class Solution {
    public int solution(String skill, String[] skill_trees) {
        int ans = 0;
        for(String skillInSkillTrees : skill_trees) {
            String temp = "";
            for(int i = 0 ; i < skillInSkillTrees.length() ; i++) {
                if(skill.contains(skillInSkillTrees.charAt(i) + "")) {
                    temp += skillInSkillTrees.charAt(i) + "";
                }
            }
            
            if(skill.startsWith(temp)) {
                ans++;
            }
        }
        return ans;
    }
}

