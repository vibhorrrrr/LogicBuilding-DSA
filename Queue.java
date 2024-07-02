class node
{
    public int data;
    public node next;

    public node(int Value)
    {
        data = Value;
        next = null;
    }
}

class Queue //FIFO
{
    public node First;
    public int iCount;

    public Queue()
    {
        System.out.println("\nObject of Queue gets created successfully");
        
        First = null;
        iCount = 0;
    }
