int ans = left;
        for (int i = left ; i <= right; i++)
        {
            ans = ans & i;
        }
        return ans;