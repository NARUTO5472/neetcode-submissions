class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        int result = 0;

        for(auto token: tokens)
        {
            if(token != "+" && token != "-" && token != "*" && token != "/")
            {
                st.push(stoi(token));
            }

            else
            {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if(token == "+")
                {
                    result = a+b;
                }

                else if(token == "-")
                {
                    result = a-b;
                }

                else if(token == "*")
                {
                    result = a*b;
                }

                else if(token == "/")
                {
                    result = a/b;
                }

                st.push(result);
            }
        }

        return st.top();
    }
};
