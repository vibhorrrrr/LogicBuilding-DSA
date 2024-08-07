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

    public void EnQueue(int No)    //InsertLast
    {  
        node newn = new node(No); 
        if(First == null)
        {
            First = newn;
        }
        else
        {
            node temp = First;

            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newn;
        }
        iCount++;
    }

    public int DeQueue()   //DeleteFirst
    {
        int Value = 0;

        if(First == null)
        {
            System.out.println("\nQueue is Empty");
            return -1;
        }
        else
        {
            Value = First.data;
            First = First.next;
        }
        iCount--;
        return Value;
    }

    public void Display()
    {
        System.out.println("\nElements of Queue are: ");
        node temp = First;
        
        while(temp != null)
        {
            System.out.print(temp.data+"\t");
            temp=temp.next;
        }
        System.out.println();
    }

class queue
{
    public static void main(String Arg[])
    {
        Queue obj = new Queue();
        int iRet = 0;

        obj.EnQueue(10);
        obj.EnQueue(20);
        obj.EnQueue(30);
        obj.EnQueue(40);

        obj.Display();

        iRet = obj.DeQueue();
        System.out.println("\nRemoved element is: "+iRet);
        
        obj.Display();   
    
    }
}
