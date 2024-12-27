struct TrieNode {
    bool flag;
    map<char, TrieNode*> next;
};

struct Trie {
    TrieNode* root;

    Trie() { root = new TrieNode(); }

    void insert(string word) {
        TrieNode* p = root;

        for (int i = 0; i < word.length(); i += 1) {
            if ((p->next).count(word[i]) == 0) {
                (p->next).insert(make_pair(word[i], new TrieNode()));
            }

            p = (p->next)[word[i]];
        }

        p->flag = true;
    }
};
