class Node {
    public int data;
    public Node next;

    public Node(int value) {
        data = value;
        next = null;
    }
}

class Stack {
    public Node First;
    public int iCount;

    public Stack() {
        System.out.println("\nObject of Stack gets created successfully");
        First = null;
        iCount = 0;
    }

    public void Push(int number) {
        Node newNode = new Node(number);
        if (First == null) {
            First = newNode;
        } else {
            newNode.next = First;
            First = newNode;
        }
        iCount++;
    }

