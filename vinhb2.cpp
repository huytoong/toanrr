#include<bits/stdc++.h>
using namespace std;
class host{
    public: int seq, ack;
    public: int buff,previous;
    public: string name;
};
int main(){
    host A,B;
    A.name="A";     B.name="B";
    int step,MSG;
    // set value seq,ack
    A.seq=1000;     B.seq=1000;  //demo
    A.ack=0;        B.ack=1000; // author trantung
    cout<<"STEP: ";
    cin>>step;
    cout<<"MGS: ";
    cin>>MSG;
    int i=1;
    host *from,*to;
    while (step--){
        string input;
        
        bool finish,PhatHien_wrongMsg=0,acceptMSG;
        cout<<"FINISH ?";
        cin>>finish;
        cout<<"A to B || B to A: ";
        cin>>input;
        if(input=="A") {
          from=&A;
          to=&B;
        }
        else {
          from=&B;
          to=&A;
        }
        if(i==1) {
          from->ack=to->seq;
          from->previous=0;
          to->previous=0;
          acceptMSG=1;
        }
        cout<<"step "<<i<<": SEQ_"<<from->name<<": "<<from->seq<<"   ACK_"+from->name<<": "<<from->ack<<endl;
        // if(PhatHien_wrongMsg==1) cout<<"PHAT HIEN GUI SAI"<<endl;
        // else cout<<endl;
        // if(acceptMSG==0) cout<<" KO ACC"<<endl;
        // else cout<<endl;
        if (from->seq != to->ack) acceptMSG=0;
        else acceptMSG=1;
        if (acceptMSG==0 && from->previous == 0)
          PhatHien_wrongMsg = 1;
        else
          PhatHien_wrongMsg = 0;
        if(finish==1){
            if(acceptMSG==1){
              from->seq+=MSG;
              to->ack+=MSG;
            }
            else{
              if(PhatHien_wrongMsg==0){
                from->seq+=MSG;
              }
              else{
                from->seq=to->ack;
                to->seq=from->ack;
              }
            }  
        }
        else{
          from->seq+=MSG;
        }
        from->previous=1;
        to->previous=0;
        i++;
    }
    
}
