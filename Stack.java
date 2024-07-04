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

class Stack //LIFO
{
    public node First;
    public int iCount;

    public Stack()
    {
        System.out.println("\nObject of Queue gets created successfully");
        
        First = null;
        iCount = 0;
    }

    public void Push(int No)    //InsertFirst
    {  
        node newn = new node(No); 
        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next=First;
            First=newn;            
        }
        iCount++;
    }

    public int Pop()   //DeleteFirst
    {
        int Value = 0;

        if(First == null)
        {
            System.out.println("\nStack is Empty");
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
        System.out.println("\nElements of Stack are: ");
        node temp = First;
        
        while(temp != null)
        {
            System.out.print(temp.data+"\n");
            temp=temp.next;
        }
        System.out.println();
    }

class Stack
{
    public static void main(String Arg[])
    {
        Stack obj = new Stack();
        int iRet = 0;

        obj.Push(10);
        obj.Push(20);
        obj.Push(30);
        obj.Push(40);

        obj.Display();

        iRet = obj.Pop();
        System.out.println("\nRemoved element is: "+iRet);
        
        obj.Display();   
    
    }
}
