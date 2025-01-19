#include <bits/stdc++.h>

using std::cin;
using std::cout;

class list {
public:
  list();                 /* κατασκευαστής:  κατασκευάζει μία κενή λίστα */
  bool empty();           /* ελέγχει αν η λίστα είναι κενή */
  int size();             /* επιστρέφει το μέγεθος της λίστας */
  void add(int k, int x); /* εισάγει το στοιχείο x στη θέση k της λίστας */
  int get(int k); /* επιστρέφει την τιμή του στοιχείου στη θέση k της λίστας */
  void remove(int k); /* διαγράφει το στοιχείο στη θέση k της λίστας */

private:
  struct node {
    int info;
    node *next;
  };
  node *first;
  int sizeoflist;
};

list::list() {
  first = nullptr;
  sizeoflist = 0;
}

bool list::empty() { return first == nullptr; }

int list::size() { return sizeoflist; }

void list::add(int k, int x) {
  if (k < 1 || k > sizeoflist + 1)
    return;

  node *temp = first;
  int i;

  if (k == 1) {
    node *p = new node;
    p->info = x;
    p->next = first;
    first = p;
  } else {
    for (i = 0; i < k - 2; i++) {
      temp = temp->next;
    }

    node *p = new node;
    p->info = x;
    p->next = temp->next;
    temp->next = p;
  }

  sizeoflist++;
}

int list::get(int k) {
  if (k < 1 || k > sizeoflist)
    return 1;

  node *temp = first;
  for (int i = 0; i < k - 1; i++) {
    temp = temp->next;
  }
  return temp->info;
}

void list::remove(int k) {
  if (k < 1 || k > sizeoflist)
    return;

  sizeoflist--;
  node *temp = first;

  if (k == 1) {
    first = first->next;
    delete temp;
    return;
  }

  for (int i = 0; i < k - 2; i++) {
    temp = temp->next;
  }

  node *p = temp->next;
  temp->next = p->next;
  delete p;
}

int main() {
  list l;
  std::ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    l.add(a, b);
  }
  int d;
  cin >> d;
  for (int i = 0; i < d; i++) {
    int place_to_delete;
    cin >> place_to_delete;
    l.remove(place_to_delete);
  }
  int place_to_print;
  cin >> place_to_print;
  int res = l.get(place_to_print);
  cout << l.size() << " " << res << std::endl;
}