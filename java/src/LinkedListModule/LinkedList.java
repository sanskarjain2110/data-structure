package LinkedListModule;

public class LinkedList {
    class Node {
        private int data;
        Node left;
        Node right;

        Node() {
            this.left = null;
            this.right = null;
        }

        public void setData(int data) {
            this.data = data;
        };

        public int getData() {
            return data;
        }
    }

    Node head, ptr;

    LinkedList() {
        this.head = new Node();
        ptr = this.head;
    }

    public void add(int value) {
        Node temp = new Node();
        temp.setData(value);
        ptr.right = temp;
        temp.left = ptr;
        ptr = temp;
    }

    public int getData() {
        return ptr.getData();
    }

    public void traverse(){
        Node temp = head.right;
        while(temp != null){
            System.out.print(temp.getData()+" ");
            temp = temp.right;
        }
    }

}

class tester {

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.add(10);
        list.add(20);
        list.add(20);
        list.add(20);
        list.traverse();
        System.out.println(list.getData());
    }
}
