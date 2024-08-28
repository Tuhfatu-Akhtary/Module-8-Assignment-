bool isValid(const string &s)   //Function declaration
 {
    unordered_map<char, char> matching_bracket = {{')', '('}, {'}', '{'}, {']', '['}};  //Unordered map defining
    stack<char> stack;   //Stack declaration

    for (char c : s) {    //Iterating each character of s using loop
        if (matching_bracket.find(c) != matching_bracket.end())  // It's a closing bracket
        {
            char top_element = stack.empty() ? '#' : stack.top();   // Check the top of the stack, if empty use a dummy value
            stack.pop();
            if (top_element != matching_bracket[c])   // If the top element doesn't match, return false
            {
                return false;
            }
        } 
        else    //Otherwise it's an opening bracket
        {
            stack.push(c);
        }
    }

    return stack.empty();  // If the stack is empty, all brackets are matched
}

Time Complexity : O(n)
Space Complexity : O(n)