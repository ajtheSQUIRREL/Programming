
            newColour = "";
            reverse(colour.begin(), colour.end());
            stack<char> st;
            for (auto i : colour)
            {
                st.push(i);
            }
            while (!st.empty())
            {
                char a = '1', b = '1';
                if (!st.empty())
                {
                    a = st.top();
                    st.pop();
                }
                if (!st.empty())
                {
                    b = st.top();
                    st.pop();
                }
                queue<char> Q;
                if (a == 'R' && b == 'B')
                    Q.push('P');
                else if (a == 'B' && b == 'R')
                    Q.push('P');
                else if (a == 'R' && b == 'G')
                    Q.push('Y');
                else if (a == 'G' && b == 'R')
                    Q.push('Y');
                else if (a == 'B' && b == 'G')
                    Q.push('C');
                else if (a == 'G' && b == 'B')
                    Q.push('C');
                else if (a == '1')
                    Q.push(b);
                else if (b == '1')
                    Q.push(a);
                else if (a == 'P' || a == 'Y' || a == 'C' || b == 'P' || b == 'Y' || b == 'C')
                {
                    Q.push(a);
                    Q.push(b);
                }
                else if (a == b)
                {
                }
                while (!Q.empty())
                {
                    char x = Q.front();
                    Q.pop();
                    newColour += x;
                }
            }
            colour = newColour;
        