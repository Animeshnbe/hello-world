#include<iostream>
using namespace std;
//adjacency list
struct vertex{
        char c;
        int w;
        //multi linked list
        
        struct vertex *adj[10];
}*root=NULL,*temp,*trav;

int main(){
        int ch,count,i,key,p,j;
        char x=65;
        root=new vertex;
        root->c=x;
        root->adj[0]=NULL;
        temp=root;        
        do{
                struct vertex *v;
                v=new vertex;
                x++;
                v->c=x;
                v->adj[0]==NULL;
                temp->adj[0]=v;
                temp=v;
                cout<<"\nContinue?";
                cin>>ch;
        }while(ch==1);
        temp=root;
        count=(int)x-65;
        
        while(temp!=NULL){
                for (i=1;i<=count;i++){
                        cout<<"Enter adjacent vertex? (1=yes or 0=no)";
                        cin>>ch;
                        if(ch==0){
                                i-=1;
                                break;
                        }
                        cout<<"\nEnter the adjacent vertex (A=1,B=2 and so on) to "<<temp->c<<" and its weight: ";
                        cin>>key;
                        trav=root;
                        if(key>1){
                                for (j=1;j<key;j++)
                                        trav=trav->adj[0];
                        }
                        temp->adj[i]=trav;
                        cin>>temp->adj[i]->w;
                }
                for(j=i+1;j<10;j++){
                        temp->adj[j]=NULL;
                }
                temp=temp->adj[0];
        }
        //printing graph adjacency list format
        temp=root;
        while(temp->adj[0]!=NULL){
                p=1;
                cout<<"\n"<<temp->c<<"-->";
                if(temp->adj[p]==NULL){
                        cout<<" nil";
                }
                else{
                        while(temp->adj[p]!=NULL){
                                trav=temp->adj[p];
                                cout<<" "<<trav->c;
                                p++;
                                //cout<<"  TEST";
                        }
                        cout<<" nil";
                }
                temp=temp->adj[0];        
        }
        return 0;
}
