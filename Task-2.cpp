string removeAdjacentDuplicates(string s)  //Function declaration
{
    stack<char> stk;    //Stack declaration
    for (char c : s) {    //Iterating each character of s using loop
        if (!stk.empty() && stk.top() == c)  // If top of stack is same as current character, pop it (remove the duplicate)
        {   
            stk.pop();
        } 
        else // Otherwise, push the current character onto the stack
        {
            stk.push(c);
        }
    }
    
    if (stk.empty())  // If the stack is empty, return "-1" indicating an empty string
    {
        return "-1";
    }

    string result;  //string declaration to store the result
    while (!stk.empty())   // Collect the characters from the stack to form the final string
    {
        result += stk.top();
        stk.pop();
    }
    
    reverse(result.begin(), result.end());  // The characters are collected in reverse order, so we reverse the string before returning it
    return result;
}



Time Complexity : O(n)
Space Complexity : O(n)

