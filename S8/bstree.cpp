#include <bits/stdc++.h>

using std::cin;
using std::cout;

class bstree {
public:
  bstree();           /* κατασκευαστής: κατασκευάζει ένα κενό ΔΔΑ */
  int height();       /* επιστρέφει το ύψος του ΔΔΑ (το κενό ΔΔΑ έχει ύψος 0) */
  void insert(int x); /* εισάγει τον αριθμό x στο ΔΔΑ */
  int search(int x);  /* ψάχνει τον αριθμό x στο ΔΔΑ και επιστρέφει το επίπεδο
                         στο οποίο βρίσκεται (η ρίζα βρίσκεται στο επίπεδο 1) ή 0
                         αν δεν υπάρχει */
  int min();          /* επιστρέφει το ελάχιστο στοιχείο του ΔΔΑ */
  int max();          /* επιστρέφει το μέγιστο στοιχείο του ΔΔΑ */
  void
  inorder(); /* εκτυπώνει τα στοιχεία του ΔΔΑ με ενδοδιατεταγμένη διάσχιση */
  void
  preorder(); /* εκτυπώνει τα στοιχεία του ΔΔΑ με προδιατεταγμένη διάσχιση */
  void
  postorder(); /* εκτυπώνει τα στοιχεία του ΔΔΑ με μεταδιατεταγμένη διάσχιση */
private:
  struct node {
    int info;
    node *left, *right;
  };
  node *t;
  int h;
};

bstree::bstree() { t = nullptr; }
int bstree::height() {
  node *htl, *htr;
  htl = t->left;
  htr = t->right;
  if (t == nullptr)
    return 0;
  do {
    h++;
    ht = ht->left
  }
}

int main() {}