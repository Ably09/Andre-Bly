#define MAX 80
typedef struct BinaryTreenode
{
  char* user;
  char* password;
  struct BinaryTreenode* rightchild;
  struct BinaryTreenode* leftchild;
  unsigned int depth;
}


node;
char line[MAX], password[MAX], user[MAX];
int getout();
void get (char l[MAX],char p[MAX],char u[MAX]);
node* insert(char* u, char* p, node* pos, int d);
void delete(node* position, char* a, char* p, int* n);
void alpha(node* position);
