struct LL_node                              // Linked List to store the encoded bits of each corresponding character
{
    int data;                               // Single bit either 0 or 1
    struct LL_node *next;                   // next node pointing to next bit
};

struct HuffmannTreenode                     // structure of a Minheap node for huffmann tree
{
    char data;                              // Charcater in the node
    unsigned freq;                          // Frequency of the corresponding character
    struct HuffmannTreenode *left, *right;  // Leaft and Right Child of the node
};

struct HuffmannTree                         // all huffmanntree nodes or minheap nodes
{
    unsigned size;                          // Corresponding to current size value of our collection of nodes
    unsigned capacity;                      // Corresponding to current capacity limit value of our collection of nodes
    struct HuffmannTreenode **array;        // Array of huffmann tree node pointers
};

struct LL_node *insert(struct LL_node *head, int x);                 
void print_LL(struct LL_node *head);                                      
struct HuffmannTreenode *newNode(char data, unsigned freq);
struct HuffmannTree *createMinHeap(unsigned capacity);
void swapHFtreenode(struct HuffmannTreenode **a, struct HuffmannTreenode **b);

void minHeapify(struct HuffmannTree *minHeap, int index);
struct HuffmannTreenode  *extractMin(struct HuffmannTree *minHeap);
void INSERT(struct HuffmannTree *minHeap, struct HuffmannTreenode *minHeapNode); 
int IsLeaf(struct HuffmannTreenode *root);
struct HuffmannTree *CreateHFtree(char data[], int freq[], int size);
struct HuffmannTreenode *buildHuffmanTree(char data[], int freq[], int size);


void assigncode(struct HuffmannTreenode *root, int arr[], int node);
void printCodes(char data[], int size);
