#include<iostream>
#include<list>
using namespace std;

class graph{
    int V;
    list <int> *l;

  public:  
   graph(int v){
       V=v;
       l = new list <int> [V];
   }
   void addedge (int i, int j, bool undirected = true){
       l[i].push_back(j);
       if (undirected){
           l[j].push_back(i);
       }
   }
   void printAdjList(){
       for (int i=0; i< V;i++){
           cout<<i<<"-->";

           for (auto node:l[i]){
               cout << node << ",";
           }
           cout << endl;
       }
   }
};



int main() {
    graph g(6);
    g.addedge(1,2);
    g.addedge(3,2);
    g.addedge(3,1);
    g.addedge(4,2);
    g.addedge(4,3);
    g.addedge(4,0);
    g.addedge(0,1);
    g.addedge(1,5); 
    g.addedge(0,5);

    g.printAdjList();
    return 0;
};

-------------------------------------------------------------------*********************************************--------------------------------------------------------------------

    //Output
0-->4,1,5,  
1-->2,3,0,5,
2-->1,3,4,  
3-->2,1,4,  
4-->2,3,0,  
5-->1,0,    
