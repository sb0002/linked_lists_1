#define MYNULL -1

struct node
{
	int data;
	int next;
	int valid;
} ll[100];

void init(struct node *);
int add(struct node *, int);
void print(struct node *);
int delete(struct node *, int);
int search(struct node *, int);
int get_node(struct node *);
