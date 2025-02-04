#include <iostream>  
using namespace std;  
  
struct node {  
    int info;  
    node *left, *right;  
};  
typedef node *tree;  
  
void preorderOutside (tree t) {  
    if (t != nullptr) {   
        cout << t->info << " ";  
        preorderOutside(t->left);  
        preorderOutside(t->right);  
    }  
}  
  
void postorderOutside (tree t) {  
    if (t != nullptr) {   
        postorderOutside(t->left);  
        postorderOutside(t->right);  
        cout << t->info << " ";  
    }  
}  
  
void inorderOutside (tree t) {  
    if (t != nullptr) {   
        inorderOutside(t->left);  
        cout << t->info << " ";  
        inorderOutside(t->right);  
    }  
}  
  
int heightOutside (tree t) {  
    if (t == nullptr) return 0;  
    else return 1 + max(heightOutside(t->left), heightOutside(t->right));  
}  
  
class bstree {  
    public:  
        bstree () {  
            root = nullptr;  
        }  
        int height () {  
            return heightOutside(root);  
        }  
        void insert (int x) {  
            tree p = root, q = new node;  
            q->info = x;  
            q->left = q->right = nullptr;  
            if (root == nullptr) {  
                root = q;  
                return;  
            }  
            while (true) {  
                if (p->info > x) {  
                    if (p->left == nullptr) {  
                        p->left = q;  
                        break;  
                    } else p = p->left;  
                } else {  
                    if (p->right == nullptr) {  
                        p->right = q;  
                        break;  
                    } else p = p->right;  
                }  
            }  
        }  
        int  search (int x) {  
            tree p = root;  
            int count = 0;  
            while (p != nullptr) {  
                count++;  
                if (p->info == x) return count;  
                else if (p->info > x) p = p->left;  
                else p = p->right;  
            }  
            return 0;  
        }  
        int  min () {  
            tree p = root;  
            while (true) {  
                if (p->left == nullptr) return p->info;  
                else p = p->left;  
            }  
        }  
        int  max () {  
            tree p = root;  
            while (true) {  
                if (p->right == nullptr) return p->info;  
                else p = p->right;  
            }  
        }  
        void inorder () {  
            inorderOutside(root);  
            cout << "end" << endl;  
        }  
        void preorder () {  
            preorderOutside(root);  
            cout << "end" << endl;  
        }  
        void postorder () {  
            postorderOutside(root);  
            cout << "end" << endl;  
        }  
    private:  
        tree root;  
};  
  
class queue {  
    public:  
        queue() {  
            front = rear = nullptr;  
        }  
        void enqueue(int x) {  
            nodel *p = new nodel;  
            p->data = x;  
            p->next = nullptr;  
            if (front == nullptr) front = p;  
            else rear->next = p;  
            rear = p;  
        }  
        int dequeue() {  
            nodel *p = front;  
            int result = front->data;  
            if (front == rear) rear = nullptr;  
            front = front->next;  
            delete p;  
            return result;  
        }  
    private:  
        struct nodel {  
            int data;  
            nodel *next;  
        };  
        nodel *front, *rear;  
};  
  
int main() {  
    bstree b;  
    queue q;  
    int N, M, x;  
  
    cin >> N;  
    for (int i = 0; i < N; i++) {  
        cin >> x;  
        b.insert(x);  
    }  
  
    cin >> M;  
    for (int i = 0; i < M; i++) {  
        cin >> x;  
        q.enqueue(x);  
    }  
  
    cout << b.height() << endl;  
    cout << b.min() << " " << b.max() << endl;  
    for (int i = 1; i < M; i++)   
        cout << b.search(q.dequeue()) << " ";  
    cout << b.search(q.dequeue()) << endl;  
    b.inorder();  
    b.preorder();  
    b.postorder();  
  
    return 0;  
}
