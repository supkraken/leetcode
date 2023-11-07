#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> pq;
    void seatManager(int n) {
        for(int seat = 1 ; seat <= n ; seat++)
            pq.push(seat);    
    }
    
    int reserve() {
        int seat = pq.top();
        pq.pop();
        return seat;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }

int main(){
    seatManager(10);
    cout<<"smallest-numbered unreserved seat : "<<reserve()<<endl;
    cout<<"smallest-numbered unreserved seat : "<<reserve()<<endl;
    cout<<"smallest-numbered unreserved seat : "<<reserve()<<endl;
    int seat;
    cout<<"unreserve the seat number : ";
    cin>>seat;
    unreserve(seat);
    cout<<"smallest-numbered unreserved seat : "<<reserve()<<endl;
    return 0;
}