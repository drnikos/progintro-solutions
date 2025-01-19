#include <bits/stdc++.h>

class queue {
public:
  queue();             /* κατασκευαστής:  κατασκευάζει μία κενή ουρά */
  bool empty();        /* ελέγχει αν η ουρά είναι κενή */
  void enqueue(int x); /* εισάγει ένα στοιχείο στην ουρά */
  int dequeue();       /* αφαιρεί ένα στοιχείο από μια μη κενή ουρά */
  int peek(); /* επιστρέφει (χωρίς να αφαιρεί) το πρώτο στοιχείο μιας μη κενής
                 ουράς */

private:
  struct node {
    int info;
    node *next;
  };
  node *front, *rear;
};

queue::queue() { front = rear = nullptr; }
bool queue::empty() { return front == nullptr; }
void queue::enqueue(int x) {
  node *p = new node;
  p->info = x;
  p->next = nullptr;
  if (front == nullptr)
    front = p;
  else
    rear->next = p;
  rear = p;
}
int queue::dequeue() {
  node *p = front;
  int res = front->info;
  if (front == rear)
    rear = nullptr;
  front = front->next;
  delete p;
  return res;
}
int queue::peek() { return front->info; }

int main() {
  std::ios_base::sync_with_stdio(false);
  int c;
  queue neg;
  queue pos;
  int equilibrium = 0;
  while (std::cin >> c) {
    equilibrium += c > 0 ? 1 : -1;
    c > 0 ? pos.enqueue(c) : neg.enqueue(c);
  }
  if (equilibrium != 0) {
    std::cout << "no\n";
    return 0;
  }
  bool res = true;

  while (!neg.empty())
    if (neg.dequeue() != -pos.dequeue())
      res = false;

  res ? std::cout << "yes\n" : std::cout << "no\n";
}
