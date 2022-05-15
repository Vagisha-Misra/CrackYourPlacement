Node* segregate(Node *head) {
        int z,o,t;
        z=o=t=0;
        Node* ptr=head;
        while(ptr!=NULL){
            if(ptr->data == 0)z++;
            else if(ptr->data == 1)o++;
            else t++;
            ptr=ptr->next;
        }
        ptr = head;
        while(z--){
            ptr->data = 0;
            ptr = ptr->next;
        }
        while(o--){
            ptr->data = 1;
            ptr = ptr->next;
        }
        while(t--){
            ptr->data = 2;
            ptr = ptr->next;
        }
        return head;
    }