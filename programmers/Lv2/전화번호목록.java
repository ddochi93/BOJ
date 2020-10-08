class Solution {
    public boolean solution(String[] phone_book) {
        boolean isNotPrefix = true;
        
        int len = phone_book.length;
        for(int i = 0 ; i < len ; i++) {
            String phoneNumber = phone_book[i];
            for(int j = 0 ; j < len ; j++) {
                if(i == j ) {
                    continue;
                } else {
                    if(phone_book[j].startsWith(phoneNumber)) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}

