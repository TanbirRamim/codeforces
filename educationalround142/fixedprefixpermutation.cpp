#include <bits/stdc++.h>
using namespace std;

struct Node
{

    Node *link[10];
    bool ends = false;

    bool containsKey(int ch)
    {
        return (link[ch] != NULL);
    }
    void put(int ch, Node *n)
    {
        link[ch] = n;
    }
    Node *get(int c)
    {
        return link[c];
    }
    void setEnd() { ends = true; }

    bool isEnd() { return ends; }
};

class Trie
{
public:
    Node *head;
    Trie()
    {
        head = new Node();
    }

    void insert(vector<int> word)
    {
        Node *node = head;

        for (int i = 0; i < word.size(); i++)
        {
            if (!node->containsKey(word[i]))
            {
                Node *newnode = new Node();
                node->put(word[i], newnode);
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }

    int search(vector<int> word)
    {

        int ans = 0;
        Node *node = head;
        for (int i = 0; i < word.size(); i++)
        {
            if (!node->containsKey(word[i]))
                return ans;
            ans++;

            node = node->get(word[i]);
        }
        return ans;
    }

    //  bool startsWith(string word) {
    //      Node* node=head;
    //      for(int i=0;i<word.size();i++){
    //          if(!node->containsKey(word[i]))return false;

    //          node=node->get(word[i]);
    //      }
    //      return true;
    //  }
};

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    vector<vector<int>> b;

    // return ;

    for (int i = 0; i < n; i++)
    {

        vector<int> v(m);

        for (int j = 0; j < m; j++)
        {
            v[a[i][j]] = j;

            // cout<<v[a[i][j]]<<" ";
        }
        // cout<<endl;

        b.push_back(v);
    }

    // return ;

    Trie *trie = new Trie();

    for (int i = 0; i < n; i++)
    {
        trie->insert(b[i]);
    }

    // return ;

    for (int i = 0; i < n; i++)
    {
        int ans = trie->search(a[i]);
        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}