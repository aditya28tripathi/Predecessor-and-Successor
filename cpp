class Solution {
public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        pre = NULL;
        suc = NULL;
        Node* temp = root;
        while (temp != NULL) {
            if (temp->key > key) {
                suc = temp;
                temp = temp->left;
            }
            else {
                temp = temp->right;
            }
        }
        Node* temps = root;
        while (temps!= NULL) {
            if (temps->key < key) {
                pre = temps;
                temps = temps->right;
            }
            else {
                temps = temps->left;
            }
        }
    }
};
