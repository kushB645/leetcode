class MyLinkedList {
public:
    class Node {
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            next = NULL;
        }
    };
    Node* head;
    MyLinkedList() { head = NULL; }

    int get(int index) {
        Node* temp = head;
        int count = 0;

        while (temp) {
            if (count == index)
                return temp->val;

            count++;
            temp = temp->next;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void addAtIndex(int index, int val) {
        Node* temp = head;
        int count = 0;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        while (temp) {
            if (count == index - 1) {
                Node* newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }

            temp = temp->next;
            count++;
        }
    }

    void deleteAtIndex(int index) {

        if (head == NULL)
            return;

        if (index == 0) {
            head = head->next;
            return;
        }

        Node* temp = head;
        int count = 0;

        while (temp->next) {
            if (count == index - 1) {
                temp->next = temp->next->next;
                return;
            }

            temp = temp->next;
            count++;
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