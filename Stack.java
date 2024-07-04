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

    public int Pop() {
        int value = 0;

        if (First == null) {
            System.out.println("\nStack is Empty");
            return -1;
        } else {
            value = First.data;
            First = First.next;
        }
        iCount--;
        return value;
    }

    public void Display() {
        System.out.println("\nElements of Stack are: ");
        Node temp = First;

        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        Stack obj = new Stack();
        int iRet = 0;

        obj.Push(10);
        obj.Push(20);
        obj.Push(30);
        obj.Push(40);

        obj.Display();

        iRet = obj.Pop();
        System.out.println("\nRemoved element is: " + iRet);

        obj.Display();
    }
}


