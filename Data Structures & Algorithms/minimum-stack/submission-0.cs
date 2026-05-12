public class MinStack {
private Stack<int> st;
private Stack<int> minStack;

    public MinStack() {
        st = new Stack<int>();
        minStack = new Stack<int>();
    }
    
    public void Push(int val) {
        st.Push(val);
        val = Math.Min(val, minStack.Count == 0 ? val : minStack.Peek());
        minStack.Push(val);
    }
    
    public void Pop() {
        st.Pop();
        minStack.Pop();
    }
    
    public int Top() {
        return st.Peek();
    }
    
    public int GetMin() {
        return minStack.Peek();
    }
}
