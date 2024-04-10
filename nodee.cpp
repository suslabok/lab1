#include 
class node{
    public:
    int info;
    node*next;
    node(){}
    node(int d):info(d),next( nullptr){}
    node(int d,node*next):info (d),next(next){}
    };
class linkedlist{
    private:
    node HEAD;
    node TAIL;
    public:
    linkedlist();
    ~linkedlist();
    void add(node *pred,int data);
    void addtohead(int data);
    void removefromtail(int data);
    bool remove (int data);
    bool removefromhead(int &data);
    bool removefromtail(int &data);
    bool isempty();
    void head(int &data);


};