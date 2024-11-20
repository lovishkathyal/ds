char* mergeAlternately(char* word1, char* word2) {
    int n1 = strlen(word1);
    int n2 = strlen(word2);
    int l = n1 + n2;
    char* ans = (char*)malloc((l + 1) * sizeof(char));
    
    if (ans == NULL) {
        return NULL; 
    }

    int p1 = 0, p2 = 0;

    for (int i = 0; i < l; i++) {
        if (i % 2 == 0 && p1 < n1) {
            ans[i] = word1[p1++];
        } else if (p2 < n2) {
            ans[i] = word2[p2++];
        } else if (p1 < n1) {
            ans[i] = word1[p1++];
        }
    }
    
    ans[l] = '\0';
    return ans;
}
