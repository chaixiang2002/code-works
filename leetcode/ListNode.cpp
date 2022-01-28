class MyLinkedList {
public:
    struct ListNode{
        int val;
        ListNode* next;
        ListNode(int val):val(val),next(nullptr){}
    };
    ListNode* dummyHesd;
    int _size;
    MyLinkedList() {
       dummyHesd=new ListNode(0);
       _size=0;
    }

    int get(int index) {
       // pri();
        ListNode* find=dummyHesd;
        if(index<0)return -1;
        while( index-- ){
            if(find->next==NULL)
                return -1;
            find=find->next;
        }
        if(find->next==NULL)
                return -1;
        return find->next->val;
    }

    void addAtHead(int val) {
        ListNode* tmp=new ListNode(val);
        tmp->next=dummyHesd->next;
        dummyHesd->next=tmp;
        _size++;
    }

    void addAtTail(int val) {
        ListNode* find=dummyHesd;
        while(find->next!=NULL){
            find=find->next;
        }
        ListNode* tmp=new ListNode(val);
        tmp->next=NULL;
        find->next=tmp;
        _size++;
    }

    void addAtIndex(int index, int val) {
        if(index>_size)return;
        ListNode* find=dummyHesd;
        if(index<0)index=0;
        while( index-- ){
            if(find->next==NULL)
                break;
            find=find->next;
        }
        ListNode* tmp=new ListNode(val);
        tmp->next=find->next;
        find->next=tmp;
        _size++;

    }

    void deleteAtIndex(int index) {
        ListNode* find=dummyHesd;
        if(index<0)index=0;
        while( index-- ){
            if(find->next==NULL)
                break;
            find=find->next;
        }
        if(find->next!=NULL){
        ListNode* tmp=find->next;
       // std::cout<<"d:"<<tmp->val;
        find->next=find->next->next;
        delete tmp;
        _size--;
        }

    }
    void pri(){
        ListNode* find=dummyHesd;
        while(find->next!=NULL){
            std::cout<<find->next->val<<'\t';
            find=find->next;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */